#include <iostream>

using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;


        cout << firstNumber << " > " << secondNumber << ": "<< (firstNumber > secondNumber) << endl;


        cout << firstNumber << " < " << secondNumber << ": " << (firstNumber < secondNumber) << endl;


        cout << firstNumber << " == " << secondNumber << ": " << (firstNumber == secondNumber) << endl;


        cout << "Numbers are not equal and not greater or less than each other." << endl;

    return 0;
}
