#include <iostream>

using namespace std;

int main() {
    const int maxMultiplier = 12;
    const int maxNumber = 5;

    for (int i = 1; i <= maxNumber; ++i) {
        cout << "Multiplication table for: " << i << endl;


        for (int j = 1; j <= maxMultiplier; ++j) {
            cout << i * j << "\t";
        }
        cout << endl;
    }

    return 0;
}
