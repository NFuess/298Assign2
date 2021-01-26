/*
This program asks for 10 non-negative numbers to populate an array of integers. Negative numbers will result in
the user being reprompted for a valid integer. This array is then put to output.
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int intArray[10];

  cout << "Please enter 10 non-negative numbers " << endl;

  for(int i = 0; i < 10; ++i) {
    int numberToStore;
    bool isNegative;
    do {
      cout << "Enter a non-negative number." << endl;
      cin >> numberToStore;
      if(numberToStore > -1) {
        isNegative = false;
      }
      else{
        cout << "Invalid input. Reprompting." << endl;
        isNegative = true;
      }
    } while(isNegative);
    intArray[i] = numberToStore;
  }

cout << "Printing your array..." << endl;
  for(int i = 0; i < 10; ++i) {
    cout << intArray[i] << " ";
  }
  cout << endl;


  return 0;
}
