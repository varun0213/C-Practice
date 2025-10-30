#include <iostream>
using namespace std;

int main() {
    int Number;

    cout << "Please enter a Number : ";
    cin >> Number;

    Number % 2 == 0 ? cout << "Number is even": cout << "Number is odd" << endl;

    return 0;

}