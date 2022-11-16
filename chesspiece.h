#ifndef CHESSPIECE_H
#define CHESSPIECE_H

class ChessPiece
{
public:
    ChessPiece();
    void Beat();
    bool CheckMove();
    void Move();
};

class Rook : public ChessPiece
{

};

class Bishop : public ChessPiece
{

};

class Knight : public ChessPiece
{

};

class King : public ChessPiece
{

};

class Pawn : public ChessPiece
{

};

class Queen: public Rook, public Bishop
{

};

#endif // CHESSPIECE_H
