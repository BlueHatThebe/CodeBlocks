#include <iostream>

using namespace std;

int main(){
    for (int i = 0;i < 3;i++){
    int firstNumber;
    int secondNumber;
    cout << "Input first number:" << endl;
    cin >> firstNumber;
    cout << "Input second number:" << endl;
    cin >> secondNumber;
    if (firstNumber > secondNumber){
        cout << "First number is larger than second" << endl;
    } else if (firstNumber == secondNumber) {
        cout << "First and second numbers are equal" << endl;
    } else {
        cout << "Second number is larger than first" << endl;
    }
    }

   return 0;
}

