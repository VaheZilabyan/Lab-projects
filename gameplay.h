#ifndef GAMEPLAY_H
#define GAMEPLAY_H
#include "chessboard.h"
#include "player.h"

class GamePlay
{
public:
    GamePlay();
    void GameStart();
    void ControlBeatPiece();
    Player Winner();
    void GameEnd();
private:
    ChessBoard *board = board->GetInstance();
    Player player;
};

#endif // GAMEPLAY_H
