/*
This program asks for the cost of an item before tax and the sales tax rate expressed as a percentage.
The total cost of the item, including tax is then put to output.
*/

#include <iostream>
#include <ostream>
#include <iomanip>
#include <cmath>

using namespace std;


 float AddTax(float taxRatePercent, float cost) {
   float costWithTax = cost * (1 + (taxRatePercent / 100.0));
   return costWithTax;
}

void GetInput(float &taxRatePercent, float &cost) {
  cout << "Please enter the cost of an item before tax: " << flush;
  cin >> cost;
  cout << "Please enter the tax rate expressed as a percentage: " << flush;
  cin >> taxRatePercent;
  cout << endl;
}

int main(int argc, char **argv) {
  float taxRatePercent;
  float cost;
  float costAfterTax;

  GetInput(taxRatePercent, cost);
  costAfterTax = AddTax(taxRatePercent, cost);

  cout << "The cost of the item after tax is $" << fixed << setprecision(2) << costAfterTax << endl;

  return 0;
}
