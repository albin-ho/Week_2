
// Program Purpose: Solves the formula for exercise 3
// Author:
// Last Modified:31/01/2025
//
//**********************************************************************************

#include <cmath>
#include <iostream>

using namespace std;
// void hardmath(double F, double X) {
//
//   X = X - (pow(X, 3) / 3); // best to break it down into separate lines!
//   X = X + (pow(X, 5) / 5);
//   X = X - (pow(X, 7) / 7);
//
//   F = F * X;
// }

int main() {

  double a;
  double b;
  double c;
  // x = x - (pow(double) x, 3 / 3) + (pow(double) x, 5 / 5) -
  //         (pow(double) x, 7 / 7)

  cout << "Please enter a number: " << '\n';
  cin >> a;
  cout << "Please enter a 2nd number: " << '\n';
  cin >> b;
  // Calculations operations below
  cout << "The SUM of a and b= " << a + b << "\n";
  cout << "The DIFFERENCE between a and b= " << a - b << "\n";
  cout << "The PRODUCT of a and b= " << a * b << "\n";
  cout << "The AVERAGE of a and b= " << a + b / 2 << "\n";
  c = a - b;
  cout << "The absolute value between a/b= " << abs(c) << "\n";
  cout << "The MAX value of a and b= " << fmax(a, b) << "\n";
  cout << "The MIN value of a and b=" << fmin(a, b) << "\n";
  // x = (pow(x, 3) / 3) + (pow(x, 5) / 5) - (pow(x, 7) / 7);
  // f = f * x;
  // cout << "Your answer is: " << f << endl;
  // hardmath(f, x);
  return 0;
}
