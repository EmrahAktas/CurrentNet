#include "drawingscene.h"

DrawingScene::DrawingScene(QObject *parent)
{
    Q_UNUSED(parent);
    gridSize = 20;
    currentBackground = BackgroundType::line;
}

void DrawingScene::drawBackground(QPainter *painter, const QRectF &rect)
{

    switch (currentBackground)
    {

    case BackgroundType::line:
    {
        qreal left = int(rect.left()) - (int(rect.left()) % gridSize);
        qreal top = int(rect.top()) - (int(rect.top()) % gridSize);

        QVarLengthArray<QLineF, 100> lines;

        for (qreal x = left; x < rect.right(); x += gridSize)
        {
            lines.append(QLineF(x, rect.top(), x, rect.bottom()));
        }
        for (qreal y = top; y < rect.bottom(); y += gridSize)
        {
            lines.append(QLineF(rect.left(), y, rect.right(), y));
        }
        painter->drawLines(lines.data(), lines.size());
        break;
    }
    case BackgroundType::dot:
    {
        QPen pen;
        painter->setPen(pen);

        int left = int(rect.left()) - (int(rect.left()) % gridSize);
        int top = int(rect.top()) - (int(rect.top()) % gridSize);

        QVector<QPointF> points;
        for (int x = left; x < rect.right(); x += gridSize)
        {
            for (int y = top; y < rect.bottom(); y += gridSize)
            {
                points.append(QPointF(x,y));
            }
        }
        painter->drawPoints(points.data(), points.size());
        break;
    }

    }
}

void  DrawingScene::setGridSize(int gridSize)
{
    this->gridSize = gridSize;
}

int  DrawingScene::getGridSize()
{

    return this->gridSize;
}

void  DrawingScene::setcurrentBackground(BackgroundType background)
{
    this->currentBackground = background;
}

BackgroundType  DrawingScene::getcurrentBackground()
{
    return this->currentBackground;
}



