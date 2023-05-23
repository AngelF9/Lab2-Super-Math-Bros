// lui.cpp
// Name: Angel Fuentes
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  cout << setprecision(1) << fixed;

  int drill_setting = 1;
  float power_level = 7;
  
  cout << "drill_setting = " << drill_setting 
       << ", power_level = " << power_level << endl;

  drill_setting = 3;
  cout << "drill_setting = " << drill_setting 
       << ", power_level = " << power_level << endl; 

  power_level = 6.5;
  cout << "drill_setting = " << drill_setting 
       << ", power_level = " << power_level << endl; 

  drill_setting = power_level + 1;
  cout << "drill_setting = " << drill_setting 
       << ", power_level = " << power_level << endl;

  int battery = 10 - (int)power_level / 2;
  string status = "fixing"; 
  cout << "battery = " << battery << ", status = " << status << endl;

  battery -= 1;

  status = "fixed";
  
  cout << "battery = " << battery << ", status = " << status << endl;

  return 0;
}
