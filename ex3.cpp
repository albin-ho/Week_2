
// Program Purpose: Solves the formula for exercise 3
// Author:
// Last Modified:17/02/2025
//
// The maths formula is confusing as I do not know what to expect it to do?
//
//
//**********************************************************************************

#include <cmath>
#include <iostream>

using namespace std;
//
// Function prototype
void hardmath(double F, double X);
//
//
// Function Definition
void hardmath(double F, double X) {

  X = X - (pow(X, 3) / 3); // best to break it down into separate lines!
  X = X + (pow(X, 5) / 5);
  X = X - (pow(X, 7) / 7);

  F = F * X;
}

int main() {

  double f;
  double x;
  // x = x - (pow(double) x, 3 / 3) + (pow(double) x, 5 / 5) -
  //         (pow(double) x, 7 / 7)

  // cout << "Please enter a value for f: " << '\n';
  // cin >> f;
  // cout << "Please enter a value for x: " << '\n';
  // cin >> x;

  // x = (pow(x, 3) / 3) + (pow(x, 5) / 5) - (pow(x, 7) / 7);
  // f = f * x;
  // Call the function to perform the maths
  x = -5;
  for (int i = 1; i < 12; i++) {
    cout << i << ") The answer of: " << x << " " << f << "\n";
    // increment x on every iteration
    x += 1;
    hardmath(f, x);
  }

  // cout << "Your answer is: " << f << endl;
  //  hardmath(f, x);
  return 0;
}
