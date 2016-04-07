#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(TicTacToe* ttt)
    : wins(0), losses(0), draws(0), ttt(ttt)
{ }


HumanPlayer::HumanPlayer(TicTacToe* ttt) : Player(ttt) {}

void HumanPlayer::make_move() {
    int x, y;
    while (true) {
        cout << "Row: ";
        cin >> x;
        cout << "Column: ";
        cin >> y;
        if(ttt->make_move(x,y)) {
            break;
        }
        cout << "Illegal move" << endl;
    }
}

ComputerPlayer::ComputerPlayer(TicTacToe* ttt) : Player(ttt) {}

void ComputerPlayer::make_move() {
    ttt->make_random_move();
}
