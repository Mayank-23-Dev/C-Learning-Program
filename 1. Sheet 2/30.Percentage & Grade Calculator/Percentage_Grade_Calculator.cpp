#include <iostream>
using namespace std;

int main()
{
    int p, c, m, e, cs, mM;
    float pr;

    cout << "Enter the total marks anyone can achieve in a subject: ";
    cin >> mM;

    cout << "Enter marks for Physics: ";
    cin >> p;

    cout << "Enter marks for Chemistry: ";
    cin >> c;

    cout << "Enter marks for Maths: ";
    cin >> m;

    cout << "Enter marks for English: ";
    cin >> e;

    cout << "Enter marks for Computer Science: ";
    cin >> cs;

    int tm = p + c + m + e + cs;
    int tmM = mM * 5;
    pr = (float)tm / tmM * 100;

    cout << "Percentage: " << pr << "%" << endl;

    if (pr >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (pr >= 80)
    {
        cout << "Grade: B" << endl;
    }
    else if (pr >= 70)
    {
        cout << "Grade: C" << endl;
    }
    else if (pr >= 60)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }

}
