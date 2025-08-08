#include <iostream>
using namespace std;

int main()
{
    int m, y;

    cout << "Enter the month number (1 to 12)-: ";
    cin >> m;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        cout << "31 days" << endl;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        cout << "30 days" << endl;
    }
    else if (m == 2)
    {
        cout << "Enter the year-: ";
        cin >> y;

        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            cout << "29 days (Leap year)" << endl;
        }
        else
        {
            cout << "28 days" << endl;
        }
    }
    else
    {
        cout << "Invalid month number!" << endl;
    }
}
