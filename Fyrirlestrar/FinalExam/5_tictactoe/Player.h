#ifndef PLAYER_H
#define PLAYER_H

#include "TicTacToe.h"

class Player
{
    public:
        Player(TicTacToe* ttt, bool human);
        void make_move();

        int wins;
        int losses;
        int draws;

    private:
        TicTacToe* ttt;
        bool human;
};

class HumanPlayer
{
};

class ComputerPlayer
{
};

#endif
