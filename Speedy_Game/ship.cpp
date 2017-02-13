#include "ship.hpp"

Ship::Ship()
{

}

//defines the redrawing area
QRectF Ship::boundingRect() const
{
    return QRect(-50, -50, 50, 50);
}

//redraw
void Ship::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setBrush(Qt::GlobalColor::red);
    painter->drawRect(-50, -50, 50, 50);
}

void Ship::keyPressEvent(QKeyEvent *event)
{
    quint32 key = event->nativeScanCode();
    switch(key)
    {
    case KeyCode::UP :
        setPos(x(),y()-5);
        break;
    case KeyCode::LEFT :
        setPos(x()-5,y());
        break;
    case KeyCode::DOWN :
        setPos(x(),y()+5);
        break;
    case KeyCode::RIGHT :
        setPos(x()+5,y());
        break;
    }
}

void Ship::focusOutEvent(QFocusEvent *)
{
    this->setFocus();
}
