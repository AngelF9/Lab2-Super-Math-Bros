// bowser.cpp
// Name: Angel Fuentes
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << setprecision(2) << fixed;
  int x, y;

  cout << "Enter an integer x:" << endl;
  cin >> x;
  cout << "Enter a non-zero integer y:" << endl;
  cin >> y;
  
  cout << "x + y = " << x + y << endl; 
  cout << "x - y = " << x - y << endl;
  cout << "x * y = " << x * y << endl;
  cout << "x / y = " << (float)x / y << " or " << x / y << " remainder " 
       << x % y << endl;

  return 0;
}
