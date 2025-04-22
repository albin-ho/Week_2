
// Program Purpose: Solves the formula for exercise 3
// Author:
// Last Modified:31/01/2025
//
//**********************************************************************************

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;
double hardermath(double F) {
  double X;
  X = X * (3 * pow(X, 3)); // best to break it down into separate lines!
  X = X - (5 * pow(X, 2));
  X = X + (6 * X) - 2;
  F = F * (X * (3 * (pow(X, 3)) - (5 * (pow(X, 2)) + ((6 * X)) - 2)));
  return F;
}

int main() {

  // double f;
  // double x;
  // x = x - (pow(double) x, 3 / 3) + (pow(double) x, 5 / 5) -
  //         (pow(double) x, 7 / 7)

  //  cout << "Please enter a value for f: " << '\n';
  //  cin >> f;
  //  cout << "Please enter a value for x: " << '\n';
  //  cin >> x;
  //
  //  cout << "Your answer is: " << f << endl;

  for (int i = -5; i < 6; i++) {
    cout << "The answer for " << i << " is: " << hardermath(i) << "\n";
  }
  //  for (int j = 1; j < 6; j++) {
  //    cout << "The answer for " << j << " is: " << hardermath(j) << "\n";
  //  }
  //  cout << "\n";
  return 0;
}
