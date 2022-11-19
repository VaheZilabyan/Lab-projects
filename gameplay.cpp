#include "gameplay.h"
#include <iostream>

GamePlay::GamePlay()
{
}

void GamePlay::GameStart() {
    board->getBoard();
}
void GamePlay::ControlBeatPiece() {}
Player GamePlay::Winner() {Player p; return p;}
void GamePlay::GameEnd() {}
