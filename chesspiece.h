#ifndef CHESSPIECE_H
#define CHESSPIECE_H

class Rook
{
public:
    char getSymbol();
private:
    char symbol = 'R';
};

class Bishop
{
public:
    char getSymbol();
private:
    char symbol = 'B';
};

class Knight
{
public:
    char getSymbol();
private:
    char symbol = 'N';
};

class King
{
public:
    char getSymbol();
private:
    char symbol = 'K';
};

class Pawn
{
public:
    char getSymbol();
private:
    char symbol = 'P';
};

class Queen
{
public:
    char getSymbol();
private:
    char symbol = 'Q';
};

#endif // CHESSPIECE_H
