#include "TicTacToe.h"
#include <utility>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

TicTacToe::TicTacToe() {
    srand(time(NULL));
    reset();
}

// Makes a move in the specified cell.
// Returns true if the move was legal, false otherwise.
bool TicTacToe::make_move(int row, int col)
{
    if(row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || is_over() || board[row][col] != EMPTY) {
        return false;
    }
    board[row][col] = current_player;
    update_game_state();
    switch_current_player();
    return true;
}

// Makes a random move. If the game is over (i.e., if is_over() returns
// true) the call has no effect.
void TicTacToe::make_random_move()
{
    vector< pair<int,int> > possible_moves;
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == EMPTY) {
                possible_moves.push_back(make_pair(i,j));
            }
        }
    }

    if (possible_moves.size() != 0) {
        pair<int,int> move = possible_moves[rand() % possible_moves.size()];
        make_move(move.first, move.second);
    }
}

// Returns true if and only if the game is over. The game is over if
// either player has won, or if the board is full.
//
bool TicTacToe::is_over()
{
    return game_result != NONE;
}

// Resets the board.
void TicTacToe::reset() {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }
    game_result = NONE;
    current_player = X;
}

void TicTacToe::display()
{
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << repr[board[i][j]];
            if (j < BOARD_SIZE - 1) {
                cout << "|";
            }
        }
        cout << endl;
        if (i < BOARD_SIZE - 1) {
            for(int i = 0; i < 2 * BOARD_SIZE - 1; i++) {
                cout << "-";
            }
            cout << endl;
        }
    }
}

// Returns the result of the game.
// If the game is not over (i.e., if is_over() does not return true, NONE is returned).
// If Player 1, or Player 2, has won, PLAYER1 and PLAYER2 is returned, respectively.
// If neither player has won, DRAW is returned.
GameResult TicTacToe::result()
{
    return game_result;
}

void TicTacToe::switch_current_player()
{
    if (current_player == X) {
        current_player = O;
    } else {
        current_player = X;
    }
}

void TicTacToe::set_winner(State state)
{
    if (state == X) {
        game_result = PLAYER1;
    } else if (state == O) {
        game_result = PLAYER2;
    }
}

void TicTacToe::update_game_state()
{
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == EMPTY) {
            continue;
        }
        bool found = true;
        for (int j = 1; j < BOARD_SIZE; j++) {
            if (board[i][j] != board[i][0]) {
                found = false;
                break;
            }
        }
        if (found) {
            set_winner(board[i][0]);
            return;
        }
    }

    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[0][i] == EMPTY) {
            continue;
        }
        bool found = true;
        for (int j = 1; j < BOARD_SIZE; j++) {
            if (board[j][i] != board[0][i]) {
                found = false;
                break;
            }
        }
        if (found) {
            set_winner(board[0][i]);
            return;
        }
    }

    bool found = true;
    for (int i = 1; i < BOARD_SIZE; i++) {
        if (board[0][0] == EMPTY) {
            break;
        }
        if (board[i][i] != board[0][0]) {
            found = false;
            break;
        }
    }
    if(found) {
        set_winner(board[0][0]);
        return;
    }

    found = true;
    for (int i = 1; i < BOARD_SIZE; i++) {
        if (board[0][BOARD_SIZE - 1] == EMPTY) {
            break;
        }
        if (board[i][BOARD_SIZE - 1 - i] != board[0][BOARD_SIZE - 1]) {
            found = false;
            break;
        }
    }
    if(found) {
        set_winner(board[0][BOARD_SIZE - 1]);
        return;
    }

    int count = 0;
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if(board[i][j] != EMPTY) {
                count++;
            }
        }
    }

    if (count == BOARD_SIZE * BOARD_SIZE) {
        game_result = DRAW;
    }

}
