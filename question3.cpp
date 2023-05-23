// toad.cpp
// Name: Angel Fuentes 
#include <iostream>
using namespace std;

int main() {
  cout << "Enter a number of seconds:" << endl;

  int seconds;
  cin >> seconds;

  int minutes = 0;
  minutes = seconds / 60;
  seconds = seconds % 60;

  int hours = 0;
  hours = minutes / 60;
  minutes = minutes % 60;

  cout << hours << " hour(s), " << minutes << " minute(s), and " << seconds
       << " second(s)" << endl;

  return 0;
}
