#include <iostream>

using namespace std;

int main()
{
    for (int i = 0;i < 5;i++){
    int average;
    int subjectMarks;
    int subjectMarks1;
    int subjectMarks2;
    int subjectMarks3;
    int subjectMarks4;
    cout << "Enter marks for first subject:" << endl;
    cin >> subjectMarks;
    cout << "Enter marks for second subject:" << endl;
    cin >> subjectMarks1;
    cout << "Enter marks for third subject:" << endl;
    cin >> subjectMarks2;
    cout << "Enter marks for fourth subject:" << endl;
    cin >> subjectMarks3;
    cout << "Enter marks for fifth subject:" << endl;
    cin >> subjectMarks4;
    average = (subjectMarks + subjectMarks1 + subjectMarks2 + subjectMarks3 + subjectMarks4) / 5;
    cout << "Average is: " << average << endl;
    if (average < 50){
        cout << "Grade is F!" << endl;
    } else if (average >= 50 && average <= 70){
        cout << "Grade is B" << endl;
    } else {
        cout << "Grade is A" << endl;
    }
}
    return 0;
}
