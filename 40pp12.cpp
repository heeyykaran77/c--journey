#include <iostream>
using namespace std;
//Check whether a number is positive, negative or zero.
int main(){
    double num;
    cout<< "Enter a number: ";
    cin >> num;

    if (num > 0)
        cout << "The number is positive." << endl;
    else if (num < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;

  return 0;
}