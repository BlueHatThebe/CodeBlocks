#include <iostream>

using namespace std;

int main()
{
    // DECLARATIONS OF VARIABLES
    int studentMark;
    int passMark = 50;
    // INPUTS
    cout << "Enter student's mark" << endl;
    cin >> studentMark;
    //DECISION
    if (studentMark > 60){
    //OUTPUT
    cout << "Student has passed!" << endl;
    }
    else if (studentMark > 49 && studentMark < 61) {
    cout << "Student got average pass!" << endl;
    }
    else {
    cout << "Student did not pass!" << endl;
    }
    return 0;
}
