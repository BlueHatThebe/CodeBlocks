#include <iostream>

using namespace std;

int main()
{
    char letter;
    cout << "Enter a character" << endl;
    cin >> letter;
    if (letter == 'a' || letter == 'e' || letter == 'i'|| letter == 'o'|| letter == 'u') {
        cout << "Character entered is a vowel!" << endl;
    }
    else {
        cout << "Character entered is not a vowel!" << endl;
    }

    return 0;
}
