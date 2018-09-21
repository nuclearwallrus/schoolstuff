//*****************
//Program Name: Evil Number Guesser
//Author: Austin Turner
//IDE Used: cloud9
//Cloud9 username: nuclearwalrus
//Cloud9 workspace name: intro
//Cloud9 folder: Sandbox
//Cloud9 C++ file: randomnumber
//Program description: Asks user to guess a number and if they don't get it the number changes.
//*****************
#include <iostream>
#include <random>
using namespace std;

int main() {

    srand(time(0));
//min and max for guessing game
    int MIN = 1, MAX = 10;
    int hell = rand() % (MAX - MIN + 1) + MIN, guess;
    
    bool loop = true;
    
    while (loop == true) {
        bool evil = false;
        
        while (evil == false) {
            
            cout << hell << endl; //<-- tells what the number is (for testing)
            
            cout << "\nGuess an integer between " << MIN << " and " << MAX << "-->";
            cin >> guess;
            
            if (guess < MIN || guess > MAX) {
                cout << "\nFollow the damn rules\n";
            }
            
            else {
                if (guess == hell) {
                    cout << "\nGood guess.\n\n";
                    evil = true;
                }
                
                else {
                    if (guess < hell) {
                        cout << "Guess is too low\n";
                        hell = rand() % (MAX - MIN + 1) + MIN;
                    }
                    else {
                        cout << "Guess is too high\n";
                        hell = rand() % (MAX - MIN + 1) + MIN;
                    }
                }
            }
        }
        char input;
        cout << "Continue? y/n --> ";
        cin >> input;
        
        if (input == 'n') loop = true; //hehe
        else if (input == 'y') loop = false;
        else {
            bool a = false;
            
            while (a == false) { //dummy proofing
                cout << "\nDoes not compute\n";
                cout << "Continue? y/n --> ";
                cin >> input;
                
                if (input == 'n') a = true;
                else if (input == 'y') a = true;
                else a = false;
            }
        }
    }

    cout << "\nThanks for playing!.";

    return 0;
}