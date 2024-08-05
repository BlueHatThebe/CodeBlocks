#include <iostream>

using namespace std;

int main()
{
    // DECLARATIONS OF VARIABLES
    double firstNumber,secondNumber;
    //INPUTS
    cout << "Enter first number" << endl;
    cin >> firstNumber;
    cout << "Enter second number" << endl;
    cin >> secondNumber;
    //PROCESSING
    int addition = firstNumber + secondNumber;
    int subtraction = firstNumber - secondNumber;
    int multiplication = firstNumber * secondNumber;
    double division = firstNumber / secondNumber;
    //OUTPUTS
    cout << "Addition of the numbers is : " << addition << endl;
    cout << "Subtraction of the numbers is : " << subtraction << endl;
    cout << "Multiplication of the numbers is : " << multiplication << endl;
    cout << "Division of the numbers is : " << division << endl;
    return 0;
}


