#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include "chesspiece.h"

class ChessBoard
{
public:
    ChessBoard();
    void setBoard();
    bool Check_Moves();
    bool CheckMate();
private:
    ChessPiece piece;
};

#endif // CHESSBOARD_H
