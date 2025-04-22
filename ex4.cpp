// Program Purpose:Exercise 4 Week2, Compute Compound interest...
// Author:
// Last Modified: 03/02/2025
//
//**********************************************************************************
#include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
#include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

double Calculate_C_INT(double inter, double dep, double yea) {
  double val;
  val = dep * pow(1 + inter / yea, 3 * yea);
  return val;
}

int main() {

  double interest = 0.04;
  double deposit = 5000;
  double value;
  int years = 10;

  cout << "Assumptions for calculating Compound Interest!" << "\n";
  cout << "Number of years = 10" << "\n";
  cout << "Interest Rate of 4%" << "\n";
  cout << "Calculated on Value of £5000.00!" << "\n";
  cout << "The amount of 10 years of compounded interest will be: "
       << "£" << setprecision(6) << Calculate_C_INT(interest, deposit, years)
       << "\n";

  return 0;
}
