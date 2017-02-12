#include "ship.hpp"

Ship::Ship()
{

}

//defines the redrawing area
QRectF Ship::boundingRect() const
{
    return QRect(-10, -10, 10, 10);
}

//redraw
void Ship::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{
    painter->setBrush(Qt::GlobalColor::red);
    painter->drawRect(-10, -10, -10, -10);
}
