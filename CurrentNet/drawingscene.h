#ifndef DRAWINGSCENE_H
#define DRAWINGSCENE_H

#include <QGraphicsScene>
#include <QPainter>
#include "enumarations.h"

using namespace Enums;
class DrawingScene : public QGraphicsScene
{
    Q_OBJECT
public:
    DrawingScene(QObject *parent = nullptr);

    void setGridSize(int);
    int getGridSize();
    void setcurrentBackground(BackgroundType background);
    BackgroundType getcurrentBackground();

private:
    int gridSize;
    BackgroundType currentBackground;

protected:
    void drawBackground(QPainter*, const QRectF&) override;
};

#endif // DRAWINGSCENE_H
