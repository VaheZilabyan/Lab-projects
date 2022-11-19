#ifndef CHESSPIECE_H
#define CHESSPIECE_H

class ChessPiece
{
public:
    ChessPiece();
    virtual void Beat();
    virtual bool CheckMove();
    virtual void Move();
};

class Rook : public ChessPiece
{
public:
    void getSymbol();
private:
    char symbol = 'R';
};

class Bishop : public ChessPiece
{
public:
    char getSymbol();
private:
    char symbol = 'B';
};

class Knight : public ChessPiece
{
public:
    char getSymbol();
private:
    char symbol = 'N';
};

class King : public ChessPiece
{
public:
    char getSymbol();
private:
    char symbol = 'K';
};

class Pawn : public ChessPiece
{
public:
    char getSymbol();
private:
    char symbol = 'P';
};

class Queen: public ChessPiece
{
public:
    char getSymbol();
private:
    char symbol = 'Q';
};

#endif // CHESSPIECE_H
