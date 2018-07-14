#include "board.h"

// Board init function arguments
Board::Board()
{
    for(int i = 0; i < BOARD_SIZE; i++)
    {
        memset(Board::boardState[i], Piece::Empty, (unsigned)BOARD_SIZE);
    }
}

void Board::ilCheck(void)
{
    for(int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; i < BOARD_SIZE; i++)
        {

        }
    }
}

