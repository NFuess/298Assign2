/* This program prompts the user for two numbers which are stored and
then assigned with a value of zero*/


#include <iostream>

using namespace std;

void ZeroBoth(int &userNum1, int &userNum2) {
  userNum1 = 0;
  userNum2 = 0;
}

int main(int argc, char **argv) {
  int userNum1;
  int userNum2;
  cout << "Please enter a number: " << endl;
  cin >> userNum1;
  cout << "Please enter another number: " << endl;
  cin >> userNum2;
  ZeroBoth(userNum1, userNum2);

  cout << "Your numbers are now " << userNum1 << " " << userNum2 << endl;
  return 0;
}
