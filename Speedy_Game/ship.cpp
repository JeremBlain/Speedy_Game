#include "ship.hpp"

Ship::Ship(): width(80), height(80)
{}

//defines the redrawing area
QRectF Ship::boundingRect() const
{
    return QRect(-50, -50, 100, 100);
}

//redraw
void Ship::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setBrush(Qt::GlobalColor::red);
    painter->drawRect(-width/2, -height/2, width, height);

    QGraphicsScene *sceneObj = scene();
    QGraphicsView *view = sceneObj->views().first();

    std::cout<<"Item position: ("<<x()<<";"<<y()<<")\n";
    std::cout<<"Scene size: ("<<sceneObj->width()<<";"<<sceneObj->height()<<")\n";
    std::cout<<"View size: ("<<view->width()<<";"<<view->height()<<")"<<std::endl;
}

void Ship::keyPressEvent(QKeyEvent *event)
{
    quint32 key = event->nativeScanCode();
    QGraphicsScene *sceneObjet = scene();
    switch(key)
    {
    case KeyCode::UP :
        if(y() > height/2)
            moveBy(0, -5);
        break;
    case KeyCode::LEFT :
        if(x() > width/2)
            moveBy(-5, 0);
        break;
    case KeyCode::DOWN :
        if(y() < sceneObjet->height()-height/2)
            moveBy(0, 5);
        break;
    case KeyCode::RIGHT :
        if(x() < sceneObjet->width()-width/2)
            moveBy(5, 0);
        break;
    }
}

void Ship::focusOutEvent(QFocusEvent *)
{
    this->setFocus();
}
