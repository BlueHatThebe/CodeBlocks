#include <iostream>

using namespace std;

int main()
{
    bool firstNumber, secondNumber;

    cout << "Enter first number (0 or 1): ";
    cin >> firstNumber;

    cout << "Enter second number (0 or 1): ";
    cin >> secondNumber;

    cout << "Logical AND (first Number && second Number): " << (firstNumber && secondNumber) << endl;
    cout << "Logical OR (first Number || second Number): " << (firstNumber || secondNumber) << endl;
    cout << "Logical NOT (!first Number): " << !firstNumber << endl;
    cout << "Logical NOT (!second Number): " << !secondNumber << endl;

    return 0;
}
