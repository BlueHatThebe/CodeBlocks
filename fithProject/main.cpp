#include <iostream>

using namespace std;

int main()
{
    //DECLARATIONS OF VARIABLES
    float area,radius;
    const float PI = 3.14;
    //INPUT
    cout << "Enter radius of circle" << endl;
    cin >> radius;
    //PROCESSING
    area = PI * (radius * radius);
    //OUTPUT
    cout << "Area of circle is: " << area << endl;
    return 0;
}
