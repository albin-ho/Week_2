// Program Purpose:Prints 1 times 10 until a million!
// Author:
// Last Modified:14/04/2025
//
//**********************************************************************************
#include <cmath>
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
  double StartNum = 1;
  double multiplier = 10;
  double total;
  cout << StartNum << endl;
  for (int i = 1; i < 1000000000; i = i * 10) {
    cout << i << endl;
  }
  cout << "\n";

  return 0;
}
