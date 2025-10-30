#include <iostream>

using namespace std;

int main() {
    char Operation;
    double a;
    double b;
    double result;

    cout << "******************** CALCULATOR ********************" << endl;

    cout << "please enter a Number #1: ";
    cin >> a;

    cout << "please enter a Number #2: ";
    cin >> b;

    cout << "Please choose the operator: ";
    cin >> Operation;

    switch (Operation){
        case '+': result = a + b; break;
        case '-': result = a - b; break;
        case '*': result = a * b; break;
        case '/': result = a / b; break;
        default : cout << "Please enter a valid operator"; break;
    }
    cout << "The Answer is: " << result << endl;

    cout << "****************************************************";
    return 0;
}