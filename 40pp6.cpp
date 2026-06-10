#include <iostream>
using namespace std;
// Find compound interest (basic).
int main(){
  double principal, rate, time, amount, compoundInterest;

  cout << "Enter principal amount: ";
  cin >> principal;
  cout << "Enter rate of interest: ";
  cin >> rate;
  cout << "Enter time period: ";
  cin >> time;
  amount = principal * (1 + rate/100) * (1 + rate/100) * (1 + rate/100);
  compoundInterest = amount - principal;
  cout << "Compound Interest: " << compoundInterest << endl;
  return 0;
}