//*****************
//Program Name: RPS Strats
//Author: Austin Turner
//IDE Used: cloud9
//Cloud9 username: nuclearwalrus
//Cloud9 workspace name: intro
//Cloud9 folder: Weekly Assignments
//Cloud9 C++ file: kowalskianalysis.cpp
//Program description: Calculates statistics of different stragegies for RPS
//*****************
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

char generateToss();
int checkThrow(char, char);
void welcome();
char kill();
void throwSwitch(char&);
void throwSwitch2(char&);

const int THROWS = 100000;

int main() {

    srand(time(0));
    
    welcome(); //welcome message
    
    while (true) {
//TOP IS TIES, MID IS P1 WINS BOTTOM P2 WINS
//EACH COLUMN IS A SEPARATE STRATEGY
    float gameStats[8][3] = {0};
    
//1 RANDOM

    for (int i = 1; i <= THROWS; i++) {
        char p1 = generateToss();
        char p2 = generateToss();
        int check = checkThrow(p1, p2);
        if (check != 0)
            check == 1 ? gameStats[0][1]++ : gameStats[0][2]++;
        else gameStats[0][0]++;
    }

//2 SWITCHER
    char p1 = 'r';
    
    for (int i = 1; i <= THROWS; i++) {
        char p2 = generateToss();
        int check = checkThrow(p1, p2);
        if (check != 0)
            check == 1 ? gameStats[1][1]++ : gameStats[1][2]++;
        else gameStats[1][0]++;
        if (check == 2)
            throwSwitch(p1);
    }

//3 SWITCHER 2
    char p13 = 'r';
    
    for (int i = 1; i <= THROWS; i++) {
        char p2 = generateToss();
        int check = checkThrow(p13, p2);
        if (check != 0)
            check == 1 ? gameStats[2][1]++ : gameStats[2][2]++;
        else gameStats[2][0]++;
        if (check == 2)
            throwSwitch2(p13);
    }

//4
    char p14 = 'r';
    
    for (int i = 1; i <= THROWS; i++) {
        char p2 = generateToss();
        int check = checkThrow(p14, p2);
        if (check != 0)
            check == 1 ? gameStats[3][1]++ : gameStats[3][2]++;
        else gameStats[3][0]++;
        if (check == 2 or check == 0)
            throwSwitch(p14);
    }
//5
    char p15 = 'r';
    
    for (int i = 1; i <= THROWS; i++) {
        char p2 = generateToss();
        int check = checkThrow(p15, p2);
        if (check != 0)
            check == 1 ? gameStats[4][1]++ : gameStats[4][2]++;
        else gameStats[4][0]++;
        if (check == 2 or check == 0)
            throwSwitch2(p15);
    }

//6
    char p16 = 'r';
    
    for (int i = 1; i <= THROWS; i++) {
        char p2 = generateToss();
        int check = checkThrow(p16, p2);
        if (check != 0)
            check == 1 ? gameStats[5][1]++ : gameStats[5][2]++;
        else gameStats[5][0]++;
    }

//7
    char p17 = 'p';
    
    for (int i = 1; i <= THROWS; i++) {
        char p2 = generateToss();
        int check = checkThrow(p17, p2);
        if (check != 0)
            check == 1 ? gameStats[6][1]++ : gameStats[6][2]++;
        else gameStats[6][0]++;
    }

//8
    char p18 = 's';
    
    for (int i = 1; i <= THROWS; i++) {
        char p2 = generateToss();
        int check = checkThrow(p18, p2);
        if (check != 0)
            check == 1 ? gameStats[7][1]++ : gameStats[7][2]++;
        else gameStats[7][0]++;
    }

//STATS

    cout << "\n********** Statisitcs **********"
         << "\nState\tStrat1\tStrat2\tStrat3\tStrat4\tStrat5\tStrat6\tStrat7\tStrat8\n"
         << "-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\t-----\n"
         << "TIES\t";
    for (int j = 0; j < 8; j++) {
        cout << gameStats[j][0] / THROWS * 100 << "\t";
        if (j == 7) cout << endl;
    }
    cout << "P1 Wins\t";
    for (int k = 0; k < 8; k++) {
        cout << gameStats[k][1] / THROWS * 100 << "\t";
        if (k == 7) cout << endl;
    }
    cout << "P2 Wins\t";
    for (int l = 0; l < 8; l++) {
        cout << gameStats[l][2] / THROWS * 100 << "\t";
        if (l == 7) cout << endl;
    }
    
    char yn = kill();
    if (yn == 'n') break;
    } //end of loop
    
//goodbye message
    cout << "\nGoodbye.";
    return 0;
}

void welcome() {
    cout << "This program analyzes several strategies for RPS to determine\n"
         << "if there is an advantage to playing a certain way.\n\n"
         << "Strategies:\n"
         << "1. Random play\n"
         << "2. Play rock until a loss; then paper; then scissors; repeat\n"
         << "3. Same as #2 just in this order: rock, scissors, paper\n"
         << "4. Play rock until a tie or loss, then paper, then scissors, repeat\n"
         << "5. Same as #4 just with this order: rock, scissors, paper\n"
         << "6. Throwing just rock\n"
         << "7. Throwing just paper\n"
         << "8. Throwing just scissors\n\n"
         << "Press ENTER to initiate self destr... I mean calculate results... ";
    cin.ignore();
}

char generateToss() {
    int compChoice = rand() % 3;
    if (compChoice == 0) return 'r';
    if (compChoice == 1) return 'p';
    if (compChoice == 2) return 's';
}

int checkThrow(char p1, char p2) { //returns 0 for ties, 1 if player wins, 2 if computer wins
    if (p1 == p2) return 0; 
    if (p1 == 'r') return(p2 == 'p' ? 2 : 1);
    if (p1 == 's') return(p2 == 'r' ? 2 : 1);
    if (p1 == 'p') return(p2 == 's' ? 2 : 1);
}

void throwSwitch(char& char1) {
    if (char1 == 'r')
        char1 = 'p';
    else if (char1 == 'p')
        char1 = 's';
    else char1 = 'r';
}

void throwSwitch2(char& char1) {
    if (char1 == 'r')
        char1 = 's';
    else if (char1 == 's')
        char1 = 'p';
    else char1 = 'r';
}

char kill() {
    char yn;
    cout << "\n\nRun again? (y/n) --> ";
    cin >> yn;
    yn = tolower(yn);
    while (yn != 'y' and yn != 'n') {
        cout << "Please enter only y/n: ";
        cin >> yn;
        yn = tolower(yn);
    }
}