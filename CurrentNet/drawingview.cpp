#include "drawingview.h"

DrawingView::DrawingView(QGraphicsScene *scene, QWidget *parent)
{
    Q_UNUSED(parent);
    setScene(scene);
}
