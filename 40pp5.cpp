#include <iostream>
using namespace std;
// Find simple interest.
int main(){
  float principal, rate, time, simple_interest;

  cout << "Enter principal amount: ";
  cin >> principal;

  cout << "Enter rate of interest: ";
  cin >> rate;

  cout << "Enter time period: ";
  cin >> time;

  simple_interest = (principal * rate * time) / 100;

  cout << "Simple Interest: " << simple_interest << endl;

  return 0;
}