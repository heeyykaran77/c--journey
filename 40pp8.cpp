#include <iostream>
using namespace std;
//Check whether a number is even or odd.
int main(){
    int n;
    cout<< "Enter a number: ";
    cin >> n;
    if(n % 2 == 0)
        cout << "The number is even." << endl;
    else
        cout << "The number is odd." << endl;
  return 0;
}