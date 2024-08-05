#include <iostream>

using namespace std;

int main()
{
    double english,sesotho,maths,science,average;
    cout << "Enter marks for English" << endl;
    cin >> english;
    cout << "Enter marks for Sesotho" << endl;
    cin >> sesotho;
    cout << "Enter marks for maths" << endl;
    cin >> maths;
    cout << "Enter marks for science" << endl;
    cin >> science;
    average = (english + sesotho + maths + science) / 4.0;
    cout << "Your average is : " << average <<endl;

    if (english > 80) {
        cout << "your grade for English is A!" << endl;
    }
    else if (english > 70 && english < 80) {
        cout << "your grade for English is B!" << endl;
    }
    else if (english > 60 && english < 70) {
        cout << "your grade for English is C!" << endl;
    }
    else if (english > 50 && english < 60) {
        cout << "your grade for English is D!" << endl;
    }
    else if (english > 40 && english < 50) {
        cout << "your grade for English is E!" << endl;
    }
    else if (english > 30 && english < 40) {
        cout << "your grade for English is F!" << endl;
    }
    else if (english > 20 && english < 30) {
        cout << "your grade for English is U!" << endl;
    }
    else if (english > 10 && english < 20) {
        cout << "your grade for English is U!" << endl;
    }
    else if (english > 0 && english < 10) {
        cout << "your grade for English is too low to grade!" << endl;
    }


    if (sesotho > 80) {
        cout << "your grade for Sesotho is A!" << endl;
    }
    else if (sesotho > 70 && sesotho < 80) {
        cout << "your grade for Sesotho is B!" << endl;
    }
    else if (sesotho > 60 && sesotho < 70) {
        cout << "your grade for Sesotho is C!" << endl;
    }
    else if (sesotho > 50 && sesotho < 60) {
        cout << "your grade for Sesotho is D!" << endl;
    }
    else if (sesotho > 40 && sesotho < 50) {
        cout << "your grade for Sesotho is E!" << endl;
    }
    else if (sesotho > 30 && sesotho < 40) {
        cout << "your grade for Sesotho is F!" << endl;
    }
    else if (sesotho > 20 && sesotho < 30) {
        cout << "your grade for Sesotho is U!" << endl;
    }
    else if (sesotho > 10 && sesotho < 20) {
        cout << "your grade for Sesotho is U!" << endl;
    }
    else if (sesotho > 0 && sesotho < 10) {
        cout << "your grade for Sesotho is too low to grade!" << endl;
    }


    if (maths > 80) {
        cout << "your grade for maths is A!" << endl;
    }
    else if (maths > 70 && maths < 80) {
        cout << "your grade for maths is B!" << endl;
    }
    else if (maths > 60 && maths < 70) {
        cout << "your grade for maths is C!" << endl;
    }
    else if (maths > 50 && maths < 60) {
        cout << "your grade for maths is D!" << endl;
    }
    else if (maths > 40 && maths < 50) {
        cout << "your grade for maths is E!" << endl;
    }
    else if (maths > 30 && maths < 40) {
        cout << "your grade for maths is F!" << endl;
    }
    else if (maths > 20 && maths < 30) {
        cout << "your grade for maths is U!" << endl;
    }
    else if (maths > 10 && maths < 20) {
        cout << "your grade for maths is U!" << endl;
    }
    else if (maths > 0 && maths < 10) {
        cout << "your grade for maths is too low to grade!" << endl;
    }


    if (science > 80) {
        cout << "your grade for Science is A!" << endl;
    }
    else if (science > 70 && science < 80) {
        cout << "your grade for Science is B!" << endl;
    }
    else if (science > 60 && science < 70) {
        cout << "your grade for Science is C!" << endl;
    }
    else if (science > 50 && science < 60) {
        cout << "your grade for Science is D!" << endl;
    }
    else if (science > 40 && science < 50) {
        cout << "your grade for Science is E!" << endl;
    }
    else if (science > 30 && science < 40) {
        cout << "your grade for Science is F!" << endl;
    }
    else if (science > 20 && science < 30) {
        cout << "your grade for Science is U!" << endl;
    }
    else if (science > 10 && science < 20) {
        cout << "your grade for Science is U!" << endl;
    }
    else if (science > 0 && science < 10) {
        cout << "your grade for Science is too low to grade!" << endl;
    }

    return 0;
}
