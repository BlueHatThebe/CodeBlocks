#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    cout << "= operator: number = " << number << endl;
    cout << "+= operator: number = " << number + number << endl;
    cout << "-= operator: number = " << number - number << endl;
    cout << "*= operator: number = " << number * number << endl;
    cout << "/= operator: number = " << number / number << endl;
    cout << "%= operator: number = " << number % number << endl;
    cout << "&= operator: number = " << (number & number) << endl;
    cout << "|= operator: number = " << (number | number) << endl;
    cout << "^= operator: number = " << (number ^ number) << endl;
    cout << ">>= operator: number = " << (number >> number) << endl;
    cout << "<<= operator: number = " << (number << number) << endl;

    return 0;
}
