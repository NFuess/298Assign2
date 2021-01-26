/*
This program asks for a measurement in feet and inches and calculates the equivalent weight in metric
(meters and centimeters). The program then puts the converted weight to output. The user then will be
prompted if they wish to continue in which case the cycle is then repeated. Note that this program relies on
integerinputs and decimals aren't supported. It didn't make much sense in supporting these when the remainder of
any decimal input for feet trivializes the query for the number of inches.
*/

#include <iostream>
#include <string>
#include <ostream>

using namespace std;

void GetUserInput(int &numFeet, int &numInches) {
    cout << "Please enter the measurement in feet to the nearest whole number (without any inches): " << flush;
    cin >> numFeet;
    cout << "Please enter the measurement in inches to the nearest whole number (Type 0 if none): " << flush;
    cin >> numInches;
}

void Calculate(int numFeet, int numInches, int &numMeters, int &numCentimeters) {
  float sumCentimeters = (numFeet * 0.3048 * 100.0) + ((numInches / 12.0) * 0.3048 * 100.0);
  numMeters = sumCentimeters / 100;
  numCentimeters = sumCentimeters - (numMeters * 100);
}

void PrintResult(int numMeters, int numCentimeters) {
cout << "\nYour converted measurement is: " << numMeters << "m " << numCentimeters << "cm" << endl;
}

int main(int argc, char **argv) {
  int numFeet;
  int numInches;
  int numMeters;
  int numCentimeters;
  string userExitString;

  do {
    GetUserInput(numFeet, numInches);
    Calculate(numFeet, numInches, numMeters, numCentimeters);
    PrintResult(numMeters, numCentimeters);
    cout << "If you wish to continue you may type \"quit\". Otherwise type anything else." << endl;
    cin >> userExitString;
  } while(userExitString != "quit");

  return 0;
}
