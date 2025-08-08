#include <iostream>
using namespace std;

int main() 
{
    int d;
    int f;

    cout << "Enter the day number of the year (2 to 365): ";
    cin >> d;

    if (d < 2 || d > 365)
    {
        cout << "Invalid day number." << endl;
    }

    cout << "Enter the first day of the year:" << endl;
    cout << "0 for Sunday" << endl;
    cout << "1 for Monday" << endl;
    cout << "2 for Tuesday" << endl;
    cout << "3 for Wednesday" << endl;
    cout << "4 for Thursday" << endl;
    cout << "5 for Friday" << endl;
    cout << "6 for Saturday" << endl;
    cout << "Enter your choice (0-6): ";
    cin >> f;

    if (f < 0 || f > 6)
    {
        cout << "Invalid first day input." << endl;
    }

    int r;
    r= (f + (d - 1)) % 7;

    if (r == 0)
    {
        cout << "The day is Sunday." << endl;
    }
    else if (r == 1)
    {
        cout << "The day is Monday." << endl;
    }
    else if (r == 2)
    {
        cout << "The day is Tuesday." << endl;
    }
    else if (r == 3)
    {
        cout << "The day is Wednesday." << endl;
    }
    else if (r == 4)
    {
        cout << "The day is Thursday." << endl;
    }
    else if (r == 5)
    {
        cout << "The day is Friday." << endl;
    }
    else if (r == 6)
    {
        cout << "The day is Saturday." << endl;
    }
}
