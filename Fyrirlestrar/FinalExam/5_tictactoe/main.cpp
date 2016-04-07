#include <iostream>
#include <vector>
#include <iomanip>
#include "TicTacToe.h"
#include "Player.h"

using namespace std;

void play(TicTacToe *ttt, Player& p1, Player& p2) {
    bool p1_turn = true;
    while (!ttt->is_over()) {
        ttt->display();
        cout << endl;
        if (p1_turn) {
            p1.make_move();
        } else {
            p2.make_move();
        }
        p1_turn = !p1_turn;
    }
    ttt->display();

    GameResult res = ttt->result();
    if(res == PLAYER1) {
        cout << "Player 1 wins" << endl;
        p1.wins++;
        p2.losses++;
    } else if(res == PLAYER2) {
        cout << "Player 2 wins" << endl;
        p2.wins++;
        p1.losses++;
    } else if(res == DRAW) {
        cout << "Draw" << endl;
        p1.draws++;
        p1.draws++;
    }
    ttt->reset();
}

void header()
{
    cout << setw(23) << left << "Player"
         << setw(9) << "wins"
         << setw(9) << "draws"
         << setw(9) << "losses"
         << endl;
}

void player_stats(string name, Player& player)
{
    cout << setw(23) << left << name
         << setw(9) << player.wins
         << setw(9) << player.draws
         << setw(9) << player.losses
         << endl;
}


void print_menu()
{
	cout << "****************************" << endl
	     << "Select the game type (1-3) from the menu, any other number to quit" << endl
	     << "1. Human vs. Human" << endl
	     << "2. Human vs. Computer" << endl
	     << "3. Computer vs. Computer" << endl
	     << "****************************" << endl;
}


int main()
{
    TicTacToe *ttt = new TicTacToe();
    Player cp1(ttt, false), cp2(ttt, false);
    Player hp1(ttt, true), hp2(ttt, true);

    print_menu();

    bool cont = true;
    while (cont) {
        int res;
        cout << "Game type: ";
        cin >> res;
        if(res == 1) {
            play(ttt, hp1, hp2);
        } else if (res == 2) {
            play(ttt, hp1, cp1);
        } else if (res == 3) {
            play(ttt, cp1, cp2);
        } else {
            cont = false;
            break;
        }
    }

    cout << "********** Results **********" << endl;
    header();
    player_stats("Human player 1: ", hp1);
    player_stats("Human player 2: ", hp2);
    player_stats("Computer player 1: ", cp1);
    player_stats("Computer player 2: ", cp2);

    delete ttt;
    return 0;
}
