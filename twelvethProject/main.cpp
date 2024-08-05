#include <iostream>

using namespace std;

int main()
{
   // DECLARATIONS OF VARIABLES
    string addition,subtraction,multiplication,division,operation;
    double firstNumber,secondNumber;
    //INPUTS
    cout << "Enter first number" << endl;
    cin >> firstNumber;
    cout << "Enter second number" << endl;
    cin >> secondNumber;
    cout << "which mathematical operation would you like to perform? enter symbol" << endl;
    cin >> operation;
    if (operation == "+") {
        cout << firstNumber + secondNumber << endl;
    }
    else if (operation == "-") {
        cout << firstNumber - secondNumber << endl;
    }
    else if (operation == "*") {
        cout << firstNumber * secondNumber << endl;
    }
    else if (operation == "/") {
        cout << firstNumber / secondNumber << endl;
    }
    return 0;
}
