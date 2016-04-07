#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(TicTacToe* ttt, bool human)
    : wins(0), losses(0), draws(0), ttt(ttt), human(human)
{ }

void Player::make_move() {
    if (human) {
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
    } else {
        ttt->make_random_move();
    }
}
