#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,average,sum; //DECLARATION OF VARIABLES
    //INPUTS
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number " << endl;
    cin >> b;
    cout << "Enter third number " << endl;
    cin >> c;
    cout << "Enter fourth number " << endl;
    cin >> d;
    sum = a + b + c + d;  //PROCESSING
    cout << "Sum of the four numbers is : " << sum << endl;
    average = (a + b + c + d) / 4; //PROCESSING
    cout << "Average of the four numbers is : " << average << endl; //OUTPUT
    return 0;
}
