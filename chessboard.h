#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include "chesspiece.h"

class ChessBoard
{
public:
    static ChessBoard *GetInstance();
    ChessBoard(ChessBoard &other) = delete;
    void operator=(const ChessBoard &) = delete;
    void setBoard();
    void getBoard();
    bool Check_Moves();
    bool CheckMate();
private:
    ChessBoard() {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                table[i][j] = '-';
            }
        }
    }
    static ChessBoard* instance;
    char table[8][8];
    Rook rook;
    Bishop bishop;
    King king;
    Queen queen;
    Pawn pawn;
    Knight knight;
};

#endif // CHESSBOARD_H
