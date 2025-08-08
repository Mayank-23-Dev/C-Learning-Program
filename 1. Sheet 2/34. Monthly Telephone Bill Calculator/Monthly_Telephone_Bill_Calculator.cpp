#include <iostream>
using namespace std;

int main() 
{
    int c;
    float b;

    cout << "Enter number of calls: ";
    cin >> c;

    if (c < 0) 
    {
        cout << "Invalid input! Calls can't be negative." << endl;
    } 
    else
    {
        if (c <= 80) 
        {
            b = 250;
        } 
        else if (c <= 160) 
        {
            b = 250 + (c - 80) * 0.60;
        } 
        else if (c <= 320) 
        {
            b = 250 + 80 * 0.60 + (c - 160) * 0.50;
        } 
        else 
        {
            b = 250 + 80 * 0.60 + 160 * 0.50 + (c - 320) * 0.40;
        }
        
        if (b >= 0)
        cout << "Total Bill = Rs. " << b << endl;
        else
        {
            cout<<"Sorry for the Error from our End.Pls Retry.";    
        }
    }
    

    
    

}
