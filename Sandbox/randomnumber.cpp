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
    int hell = rand() % (10 - 1 + 1) + 1, guess;
    bool fucku = false;
    
    while (fucku == false) {
        //cout << hell << endl; <-- tells what the number is
        cout << "\nGuess an integer between 1 and 10 --> ";
        cin >> guess;
        
        if (guess < 1 || guess > 10) {
            cout << "\nFollow the damn rules\n";
        }
        else {
            if (guess == hell) {
                fucku = true;
            }
            else {
                if (guess < hell) {
                    cout << "Guess is too low\n";
                    hell = rand() % (10 - 1 + 1) + 1;
                }
                else {
                    cout << "Guess is too high\n";
                    hell = rand() % (10 - 1 + 1) + 1;
                }
            }
        }
    }

    cout << "Good guess";

    return 0;
}