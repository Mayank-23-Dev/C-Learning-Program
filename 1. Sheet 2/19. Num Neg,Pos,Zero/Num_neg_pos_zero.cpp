#include <iostream>
using namespace std;
int main() 
{
    float a;
    cout << "Enter a number: ";
    cin >>a;
    if (a > 0)
    {
        cout << "The number is positive." << endl;
    }  
    else if (a < 0)
    {
        cout << "The number is negative." << endl;
    }
    else
    {
        cout << "The number is zero." << endl;
    }
}
