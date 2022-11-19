#include "chesspiece.h"

ChessPiece::ChessPiece()
{

}

void ChessPiece::Beat() {}
bool ChessPiece::CheckMove() {return true;}
void ChessPiece::Move() {}

char Knight::getSymbol() {
    return symbol;
}

char King::getSymbol() {
    return symbol;
}

char Pawn::getSymbol() {
    return symbol;
}

char Queen::getSymbol() {
    return symbol;
}

char Bishop::getSymbol()
{
    return symbol;
}
