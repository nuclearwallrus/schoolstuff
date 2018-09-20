//*****************
//Program Name: CompoundingSavings
//Author: Austin Turner
//IDE Used: cloud9
//Cloud9 username: nuclearwalrus
//Cloud9 workspace name: intro
//Cloud9 folder: Weekly Assignments
//Cloud9 C++ file: compoundingsavings.cpp
//Program description: Calculates the balance of a savings account after one year based on type of interest
//*****************
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    int period;
    float principle, rate, balance, interest;
    
//get input
    cout << "Enter the initial deposit in your account:\n";
    cin >> principle;
    
    cout << "\nWhat is the interest rate on this account? (Please enter as a decimal):\n";
    cin >> rate;
    
    cout << "Enter the number of times the interest is compounded annually:\n";
    cin >> period;
    
//calculations
    balance = principle*pow((1+rate/period),period);
    interest = balance-principle;
    
//output
    cout << "\n********Your future savings amount********\n\n";
    cout << fixed << setprecision(2);
    
    cout << left << setw(20) << "Interest rate:" << right << setw(12) << rate*100 << "%\n"
         << left << setw(20) << "Times compounded:" << right << setw(12) << period << endl
         << left << setw(20) << "Principle:" << right << setw(4) << "$" << setw(8) << principle << endl
         << left << setw(20) << "Interest:" << right << setw(4) << "$" << setw(8) << interest << endl
         << left << setw(20) << "Amount in savings:" << right << setw(4) << "$" << setw(8) << balance << endl <<endl;

//goodbye message
    cout << "Thank you for using Austin's Bank. Your money is now ours :)";


    return 0;
}