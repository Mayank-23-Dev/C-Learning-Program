#include <iostream>
using namespace std;

int main() {
    float c, d, a;

    cout << "Enter total cost: ";
    cin >> c;

    if (c < 0) 
    {
        cout << "Invalid cost! Cost cannot be negative." << endl;
    } 
    else 
    {
        if (c < 2000) 
        {
            d = 0.05 * c;
        } 
        else if (c <= 5000) 
        {
            d = 0.20 * c;
        } 
        else if (c <= 10000) 
        {
            d = 0.35 * c;
        } 
        else 
        {
            d = 0.50 * c;
        }

        a = c - d;

        cout << "Amount to Pay = Rs. " << a << endl;
    }
}
