#ifndef DRAWINGVIEW_H
#define DRAWINGVIEW_H

#include <QGraphicsView>

class DrawingView : public QGraphicsView
{
public:
    DrawingView(QGraphicsScene *scene, QWidget *parent = nullptr);
};

#endif // DRAWINGVIEW_H
