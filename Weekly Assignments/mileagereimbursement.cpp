//*****************
//Program Name: MileageReimbursement
//Author: Austin Turner
//IDE Used: cloud9
//Cloud9 username: nuclearwalrus
//Cloud9 workspace name: intro
//Cloud9 folder: Weekly Assignments 
//Cloud9 C++ file: mileagereimbursement.cpp
//Program description: Calculates reimbursement payout based on miles driven and pay per mile.
//*****************
#include <iostream>
using namespace std;

int main() {

   float miles, payPerMile, reimburse;

   // Get the number of miles driven.
   cout << "How many miles did you drive? ";
   cin >> miles;

   // Get the per mile pay rate.
   cout << "How much do you get paid per mile? ";
   cin >> payPerMile;

   // Calculates reimbursement.
   reimburse = miles * payPerMile;

   // Display the pay.
  cout << "You will be reimbursed $" << reimburse << endl;
  
  return 0;
}