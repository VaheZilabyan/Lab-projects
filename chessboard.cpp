#include "chessboard.h"
#include <iostream>

ChessBoard* ChessBoard::instance = nullptr;

ChessBoard *ChessBoard::GetInstance()
{
    if(instance==nullptr){
        instance = new ChessBoard();
    }
    return instance;
}

void ChessBoard::setBoard() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (i == 1 || i == 6) {
                table[i][j] = pawn.getSymbol();
            }
            if (i == 0 || i == 7) {
                if (j == 0 || j == 7)
                    table[i][j] = rook.getSymbol();
                else if (j == 1 || j == 6)
                    table[i][j] = knight.getSymbol();
                else if (j == 2 || j == 5)
                    table[i][j] = bishop.getSymbol();
                else if (j == 3)
                    table[i][j] = queen.getSymbol();
                else if (j == 4)
                    table[i][j] = king.getSymbol();
            }
        }
    }
}

void ChessBoard::getBoard() {
    setBoard();
    std::cout << "   a b c d e f g h\n" << '\n';
    for (int i = 0; i < 8; ++i) {
        std::cout << 8-i << "  ";
        for (int j = 0; j < 8; ++j) {
            std::cout << table[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << '\n';
}
bool ChessBoard::Check_Moves() {
    return true;
}
bool ChessBoard::CheckMate() {
    return true;
}
