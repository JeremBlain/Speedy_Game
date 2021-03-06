#include <QApplication>
#include <QGraphicsScene>
#include <QInputMethod>
#include "ship.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene scene(0, 0, 800, 600);

    Ship myShip;
    scene.addItem(&myShip);
    myShip.setFlag(QGraphicsItem::ItemIsFocusable);
    myShip.setFocus();
    myShip.setPos(scene.width()/2, scene.height()/2);

    QGraphicsView view(&scene);
    view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view.setGeometry(200, 200, 800, 600);
    view.show();

    return a.exec();
}

