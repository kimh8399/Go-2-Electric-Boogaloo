#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include "libraries.h"

enum Piece{Empty = 0, Black = 1, White = 2};

struct Coord;
{
    int x;
    int y;
};

// Structure for the stone
struct Stone
{
    // Colour of the piece
    Piece colour;
    // The pieces location;
    Coord loc;
    //Pointer to the previous stone
    int* parent;
    //Pointer to the next stone.
    int* next;
};

class Board
{
public:
    // Board init
    Board();

    //  Place move funct;
    bool

    // Illegal move check
    void ilCheck(void);

private:
    // Contains the current state of the board;
    Stone boardState[BOARD_SIZE][BOARD_SIZE];
};

#endif // BOARD_H_INCLUDED
