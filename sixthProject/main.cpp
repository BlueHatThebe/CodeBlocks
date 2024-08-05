#include <iostream>

using namespace std;

int main()
{
    // DECLARATIONS OF VARIABLES
    int firstNumber, secondNumber, thirdNumber;

    // INPUTS
    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;
    cout << "Enter third number: ";
    cin >> thirdNumber;

    // DECISION
    if (firstNumber > secondNumber && firstNumber > thirdNumber) {
    // OUTPUT
        cout << "First number is larger than second and third number" << endl;
    } else if (secondNumber > firstNumber && secondNumber > thirdNumber) {
        cout << "Second number is larger than first and third number" << endl;
    } else if (thirdNumber > firstNumber && thirdNumber > secondNumber) {
        cout << "Third number is larger than first and second number" << endl;
    } else {
        cout << "Error with inputs or inputs are equal" << endl;
    }

    return 0;
}
