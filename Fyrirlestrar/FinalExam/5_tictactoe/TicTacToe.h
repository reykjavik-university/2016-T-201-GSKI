#ifndef TICTACTOE_H
#define TICTACTOE_H

enum GameResult
{
    NONE,
    PLAYER1,
    PLAYER2,
    DRAW
};

const int BOARD_SIZE = 3;

const char repr[] = { 'x', 'o', ' ' };

class TicTacToe
{
    public:
        TicTacToe();
        // Makes a move in the specified cell.
        // Returns true if the move was legal, false otherwise.
        bool make_move(int row, int col);
        // Makes a random move. If the game is over (i.e., if is_over() returns
        // true) the call has no effect.
        void make_random_move();
        // Returns true if and only if the game is over. The game is over if
        // either player has won, or if the board is full.
        bool is_over();
        // Resets the board.
        void reset();
        // Displays the board.
        void display();

        // Returns the result of the game.
        // If the game is not over (i.e., if is_over() does not return true, NONE is returned).
        // If Player 1, or Player 2, has won, PLAYER1 and PLAYER2 is returned, respectively.
        // If neither player has won, TIE is returned.
        GameResult result();

    private:
        void update_game_state();
        void switch_current_player();
        enum State
        {
            X = 0, O, EMPTY
        };
        State board[BOARD_SIZE][BOARD_SIZE];
        void set_winner(State state);
        GameResult game_result;
        State current_player;
};

#endif
