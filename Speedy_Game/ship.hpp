#ifndef SHIP_HPP
#define SHIP_HPP

#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>


/**
 * Author :  Jérémy Blain
 * Date : Creation : 12/02/2017
 *        Update : 12/02/2017
 *
 * Class for the ship player and maybe ennemis ship
 */

/** To Do List :
 *
 * */

class Ship : public QGraphicsItem
{
public:
    Ship();


    QRectF boundingRect() const override; //defines the redrawing area
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override; //redraw
};

#endif // SHIP_HPP
