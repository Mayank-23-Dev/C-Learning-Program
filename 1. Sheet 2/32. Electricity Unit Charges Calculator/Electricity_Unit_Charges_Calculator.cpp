#include <iostream>
using namespace std;

int main() 
{
    float u, b, s;

    cout << "Enter electricity units: ";
    cin >> u;
    if (u>0)
    {
        if (u <= 50) 
        {
            b = u * 0.5;
        } 
        else if (u <= 150) 
        {
            b = 50 * 0.5 + (u - 50) * 0.75;
        } 
        else if (u <= 250) 
        {
            b = 50 * 0.5 + 100 * 0.75 + (u - 150) * 1.20;
        } 
        else 
        {
            b = 50 * 0.5 + 100 * 0.75 + 100 * 1.20 + (u - 250) * 1.50;
        }
    }
    else
    {
        cout<<"Warning! Invalid entry";
    }
    s = 0.20 * b;
    b = b + s;

    cout << "Total Electricity Bill = Rs. " << b << endl;
}
