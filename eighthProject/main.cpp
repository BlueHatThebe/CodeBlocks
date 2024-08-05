#include <iostream>

using namespace std;

int main()
{
    //DECLARATIONS OF VARIABLES
    int pension = 500;
    int insurance = 150;
    int salary = 12500;
    //PROCESSING
    int PAYE = 12500 * 8 / 100;
    int netSalary = salary - pension - insurance - PAYE;
    //OUTPUT
    cout << "Net Salary is " << netSalary << endl;
    return 0;
}
