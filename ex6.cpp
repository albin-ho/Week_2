// Program Purpose:exercise 6 from Warm up week2
// Author:Abdul Shafaq
// Last Modified:31/01/2025
//
//**********************************************************************************
// #include <cmath>
// #include <cstdlib>
#include <iostream>
// #include <string>
// #include <vector>
// #include <iomanip>
// #include <ctime>
// #include <fstream>
// #include <iostream>
using namespace std;

int main() {
  float total, x1, x2;
  float avg;
  cout << "Please enter a number: " << endl;
  cin >> x1;
  cout << "Please enter ANOTHER number: " << endl;
  cin >> x2;
  total = x1 + x2;
  cout << "x1 add x2 = " << total << endl;
  avg = total / 2;
  cout << "the Average between the numbers is:" << avg << endl;
  return 0;
}
