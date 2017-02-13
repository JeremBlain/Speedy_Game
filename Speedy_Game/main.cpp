#include <iostream>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QInputMethod>
#include "ship.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;

    Ship *myShip = new Ship();
    scene.addItem(myShip);
    myShip->setFlag(QGraphicsItem::ItemIsFocusable);
    myShip->setFocus();

    QGraphicsView view(&scene);
    view.show();

    return a.exec();
}

