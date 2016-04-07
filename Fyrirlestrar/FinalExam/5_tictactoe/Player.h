#ifndef PLAYER_H
#define PLAYER_H

#include "TicTacToe.h"

class Player
{
    public:
        Player(TicTacToe* ttt);
        virtual void make_move() = 0;

        int wins;
        int losses;
        int draws;

    protected:
        TicTacToe* ttt;
};

class HumanPlayer : public Player
{
    public:
        HumanPlayer(TicTacToe* ttt);
        void make_move();
};

class ComputerPlayer : public Player
{
    public:
        ComputerPlayer(TicTacToe* ttt);
        void make_move();
};

#endif
