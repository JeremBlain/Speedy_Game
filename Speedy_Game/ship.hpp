#ifndef SHIP_HPP
#define SHIP_HPP

#include <iostream>
#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QKeyEvent>
#include <QGraphicsView>


/**
 * Author :  Jérémy Blain
 * Date : Creation : 12/02/2017
 *        Update : 12/02/2017
 *
 * Class for the ship player and maybe ennemis ship
 */

/** To Do List :
 * restreindre le joueur dans l'écran
 * */

enum KeyCode{UP = 0x11, LEFT = 0x1E, DOWN = 0x1F, RIGHT = 0x20}; //scancodes en hexa

class Ship : public QGraphicsItem
{
public:
    Ship();


    QRectF boundingRect() const override; //defines the redrawing area
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override; //redraw

    void keyPressEvent(QKeyEvent *event);
    void focusOutEvent(QFocusEvent *event);

private:
    int width, height;
};

#endif // SHIP_HPP
