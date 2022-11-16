#include <QCoreApplication>
#include <iostream>

#include "gameplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    GamePlay Chess;
    Chess.GameStart();

    return a.exec();
}
