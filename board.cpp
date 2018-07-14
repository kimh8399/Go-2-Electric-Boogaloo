#include "board.h"

// Board init function arguments
Board::Board()
{
    for(int i = 0; i < BOARD_SIZE; i++)
    {
        for(int j = 0; j<BOARD_SIZE; j++)
        {
            Board::boardState[i][j].colour = Empty;
        }
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

bool doMove(Coord input)
{

}

void Board::placeStone(const Coord input, const Colour colour)
{
    Board::boardState[input.x][input.y].colour = colour;
}

ostream& operator<< (ostream& os, const Board& obj)
{

    for(int i = 0; i < BOARD_SIZE; i++)
    {
        for(int j = 0; j<BOARD_SIZE; j++)
        {
            switch (obj.boardState[i][j].colour)
            {
                case Colour::Empty: cout<<"0";
                    break;
                case Colour::Black: cout<<"1";
                    break;
                case Colour::White: cout<<"2";
                    break;
            }
        }
        cout<<endl;
    }
}
