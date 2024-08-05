#include <iostream>

using namespace std;

int main()
{
    // DECLARATIONS OF VARIABLES
    int number;
    //INPUT
    cout << "Enter number: ";
    cin >> number;
    //DECISION
    if (number % 2 == 0) {
    //OUTPUT
        cout << "Number is even" << endl;
    } else {
        cout << "Number is odd" << endl;
    }
    return 0;
}
