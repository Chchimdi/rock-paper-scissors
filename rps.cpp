#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>

using namespace std;

// rock, paper, and scissors -- these are the moves a player can make
// two player game -- players make their moves simultaneously
// each player can either win, lose, or draw during each play

// to win: make a move that beats the opposing player's move
// to lose: make a move that cannot beat the opposing player's move
// to draw: make the same move as the opposing player

// player -> opponent
// to win: scissors -> paper, rock -> scissors, paper -> rock
// to lose: paper -> scissors, scissors -> rock, rock -> paper
// to draw: paper -> paper, scissors -> scissors, rock -> rock

// the two players: (1) the person who gives an input, (2) computer
// this is a two player game, but only one person can use the program, since they are competing against the computer (second player/opponent)

const int MAX = 3;
        //generating a string of random alphabets

string gen_random(int n){
    char alphabet[MAX] = {
        'r', 'p', 's'//, 'd', 'e', 'f' //, 'g',
        //   'h', 'i', 'j', 'k', 'l', 'm', 'n',
        //   'o', 'p', 'q', 'r', 's', 't', 'u',
        //   'v', 'w', 'x', 'y', 'z'
    };
    string res = "";
    for (int i = 0; i < n; i++)
        res = res + alphabet[rand() % MAX];
    return res;
};

int main() {
    int win = 0;
    int lose = 0;
    int draw = 0;

    // This tells the user the character possible for the game.
    cout << "Enter a move: r(Rock), p(Paper), s(Scissors) or q(Quit)." << endl; 

    while (true)
    {
        string userInput; string computerInput;
        
        cin >> userInput;

        srand(time(NULL));
        int n = 1;
        computerInput = gen_random(n);
        
        // The codes below will compare the moves made by the player and computer.
        if (userInput == computerInput)
        {
            cout << "Your move is '" << userInput << "', while computer move is '" << computerInput << "'." << endl;
            draw = draw + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "s" and computerInput == "p")
        {
            cout << "Your move is '" << userInput << "', while computer move is '" << computerInput << "'." << endl;
            win = win + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "p" and computerInput == "r")
        {
            cout << "Your move is '" << userInput << "', while computer move is '" << computerInput << "'." << endl;
            win = win + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "r" and computerInput == "s")
        {
            cout << "Your move is '" << userInput << "', while computer move is '" << computerInput << "'." << endl;
            win = win + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "p" and computerInput == "s")
        {
            cout << "Your move is '" << userInput << "', while computer move is '" << computerInput << "'." << endl;
            lose = lose + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "r" and computerInput == "p")
        {
            cout << "Your move is '" << userInput << "', while computer move is '" << computerInput << "'." << endl;
            lose = lose + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        else if (userInput == "s" and computerInput == "r")
        {
            cout << "Your move is '" << userInput << "', while computer move is '" << computerInput << "'." << endl;
            lose = lose + 1;
            cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
        }
        //This code will send the user to quit from the game.
        else if (userInput == "q")
        {
            break;
        }
        // This code checks if users inputs wrong move and prompts them to input the correct move.
        else if (userInput != "r" or userInput != "p" or userInput != "s" or userInput != "q")
        {
            cout << "You have selected an invalid move." << endl;
            cout << "Enter a move: r(Rock), p(Paper), s(Scissors) or q(Quit)." << endl; 
        }
        
    }

    // This code will display the total score of the game.
    cout << "win = " << win << ", Draw = " << draw << ", Loss = " << lose << "." << endl;
    cout << "Thank you for playing."<<endl;

    return 0;
}