#include <iostream>

using namespace std;

int main()
{
    //DECLARATIONS OF VARIABLES
    int area,length,width;
    //INPUTS
    cout << "Enter length of rectangle" << endl;
    cin >> length;
    cout << "Enter width of rectangle" << endl;
    cin >> width;
    area = length * width; //PROCESSING
    //OUTPUT
    cout << "Area of rectangle is : " << area << endl;

    return 0;
}
