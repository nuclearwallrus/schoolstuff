//*****************
//Program Name: RockPaperScissors
//Author: Austin Turner
//IDE Used: cloud9
//Cloud9 username: nuclearwalrus
//Cloud9 workspace name: intro
//Cloud9 folder: Weekly Assignments
//Cloud9 C++ file: rockpaperscissor.cpp
//Program description: Game of RPS with Cool Stats! Battle Royal coming soon
//*****************
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

char generateP2toss();
int checkThrow(char, char);
void printStatistics(int, int, int, int);
void finalStatistics(int, int, int, int);
void welcome();

const int WIDTH = 15;

int main() {

    srand(time(0));
    
    welcome(); //welcome message
    
    while (true) {
        int rounds = 0, p1WIN = 0, p2WIN = 0, tie = 0; //reset every new game
        
        while (true) {
            cout << "Rock, Paper, Scissors (r/p/s or q) GO: ";
            char p1;
            cin >> p1;
            while (p1 != 'r' and
                   p1 != 'p' and
                   p1 != 's' and
                   p1 != 'q') 
            {
                cout << "Invalid input... r/p/s or q: ";
                cin >> p1;
            }
            
            if (p1 == 'q') break; //for stopping game
            rounds++; 
            
            char p2 = generateP2toss();
            
            int check = checkThrow(p1, p2);
        
            if (check == 0) {
                tie++;
                cout << "TIE!\n";
            }
            if (check == 1) {
                p1WIN++;
                cout << "WIN!\n";
            }
            if (check == 2) {
                p2WIN++;
                cout << "LOSE!\n";
            }
            printStatistics(rounds, p1WIN, p2WIN, tie);
        }
        finalStatistics(rounds, p1WIN, p2WIN, tie);
        
        char yn;
        cout << "\n\nPlay another game? (y/n) --> ";
        cin >> yn;
        yn = tolower(yn);
        while (yn != 'y' and yn != 'n') {
            cout << "Please enter only y/n: ";
            cin >> yn;
            yn = tolower(yn);
        }
        if (yn == 'n') {
            p1WIN > p2WIN ? cout << "\nCongratulations, you are the new Champion!" : cout << "\nYou have failed to defeat the computer";
            break;
        }
    }
    
    return 0;
}

char generateP2toss() {
    int compChoice = rand() % 3;
    if (compChoice == 0) return 'r';
    if (compChoice == 1) return 'p';
    if (compChoice == 2) return 's';
}

int checkThrow(char p1, char p2) { //returns 1 if player wins, 2 if computer wins
    if (p1 == p2) return 0; // 0 for ties
    if (p1 == 'r') return(p2 == 'p' ? 2 : 1);
    if (p1 == 's') return(p2 == 'r' ? 2 : 1);
    if (p1 == 'p') return(p2 == 's' ? 2 : 1);
}

void printStatistics(int rounds, int p1WIN, int p2WIN, int tie) {
    cout << "Round: " << rounds << " | " << "P1 Wins: " << p1WIN << " | "
         << "Computer Wins: " << p2WIN << " | " << "Ties: " << tie << endl << endl;
}

void finalStatistics(int rounds, int p1WIN, int p2WIN, int tie) {
    cout << fixed << setprecision(2);
    cout << "\n***** Game Stats *****\n";
    cout << setw(WIDTH) << "Player 1 Wins: " << p1WIN << " (" << (float) p1WIN / rounds * 100 << "%)" << endl
         << setw(WIDTH) << "Computer Wins: " << p2WIN << " (" << (float) p2WIN / rounds * 100 << "%)" << endl
         << setw(WIDTH) << "Ties: " << tie << " (" << (float) tie / rounds * 100 << "%)" << endl
         << setw(WIDTH) << "Rounds: " << rounds << endl;
}

void welcome() {
    cout << "THIS... is Rock, Paper, Scissors.\n"
         << "In this corner, we have the all time\n"
         << "champ... THE COMPUTER!!!!\n"
         << "And in the other corner, we have the new guy....\n"
         << "some random user......... FIGHT\n\n";
}