#include <iostream>

using namespace std;

int main()
{
    // DECLARATIONS OF VARIABLES
    int age;
    //INPUT
    cout << "Enter age: ";
    cin >> age;
    //DECISION
    if (age < 18) {
    //OUTPUTS
        cout << "You are young" << endl;
    } else if (age >= 18 && age <= 30) {
        cout << "You are an adult" << endl;
    } else {
        cout << "You are too old" << endl;
    }

    return 0;
    }

