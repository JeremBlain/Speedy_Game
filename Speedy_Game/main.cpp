#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "ship.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene;

    Ship *myShip = new Ship();
    scene.addItem(myShip);

    QGraphicsView view(&scene);
    view.show();

    return a.exec();
}

