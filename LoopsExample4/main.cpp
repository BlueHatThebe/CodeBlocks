#include <iostream>

using namespace std;


int main() {
    int rows;


    cout << "Enter the number of rows: ";
    cin >> rows;


    for (int i = 1; i <= rows; ++i) {

        for (int stars = 1; stars <= i; ++stars) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
