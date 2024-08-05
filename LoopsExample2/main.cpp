#include <iostream>

using namespace std;

int main()
{
    string message = "is even";
    string message1 = "is odd";
    for (int i = 1;i < 11;i++){
        if (i %2 == 0){
            cout << i << " " << message << endl;
        } else {
            cout << i << " " << message1 << endl;
        }
    }

    return 0;
}
