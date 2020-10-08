//
//  main.cpp
//  TicTacToe
//
//  Created by Emile Dadou on 08/10/2020.
//

#include <iostream>

using namespace::std;

char square[10] = {'O',' ',' ',' ',' ',' ',' ',' ',' ',' '};
int win = 0;

void userChoice(int player) {
    if (player == 1) {
        int Case = 10;
        cout << "choose the case you wish to file" << endl;
        cin >> Case;
        square[Case] = 'x';
    }
    
    if (player == 2) {
        int Case = 10;
        cout << "choose the case you wish to file" << endl;
        cin >> Case;
        square[Case] = 'o';
    }
    
}

void board()
{
    //system("clear");
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}

int checkWin() {
    // Horizontal winning
    if ((square[1] != ' ' && square[2] != ' ' && square[3] != ' ') && (square[1] == square[2] && square[2] == square[3])) {
        return 1;
    }
    if ((square[4] != ' ' && square[5] != ' ' && square[6] != ' ') && (square[4] == square[5] && square[5] == square[6])) {
        return 1;
    }
    if ((square[7] != ' ' && square[8] != ' ' && square[9] != ' ') && (square[7] == square[8] && square[8] == square[9])) {
        return 1;
    }
    // cross winning
    if ((square[1] != ' ' && square[5] != ' ' && square[9] != ' ') && (square[1] == square[5] && square[5] == square[9])) {
        return 1;
    }
    if ((square[3] != ' ' && square[5] != ' ' && square[7] != ' ') && (square[3] == square[5] && square[5] == square[7])) {
        return 1;
    }
    // vertical winning
    if ((square[1] != ' ' && square[4] != ' ' && square[7] != ' ') && (square[1] == square[4] && square[4] == square[7])) {
        return 1;
    }
    if ((square[2] != ' ' && square[5] != ' ' && square[8] != ' ') && (square[2] == square[5] && square[5] == square[8])) {
        return 1;
    }
    if ((square[3] != ' ' && square[6] != ' ' && square[9] != ' ') && (square[3] == square[6] && square[6] == square[9])) {
        return 1;
    }
    else return 0;
}

int main(int argc, const char * argv[]) {
    // Variables
    bool endGame = false;
    
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;
    
    while (endGame == false) {
        if (checkWin() == 0) {
            board();
            userChoice(1);
            if (checkWin() == 1) {
                board();
                cout << "Player one won !" << endl;
                endGame = true;
                break;
            }
            board();
            userChoice(2);
            if (checkWin() == 1) {
                board();
                cout << "Player two won !" << endl;
                endGame = true;
                break;
            }
            board();
        }
    }
    
    return 0;
}

