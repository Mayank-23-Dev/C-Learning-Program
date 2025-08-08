#include <iostream>
using namespace std;
int main() {
    float bs, hra, da, gs;
    cout << "Enter the basic salary: ";
    cin >> bs;
    if (bs <= 10000) 
    {
        hra = 0.20 * bs;
        da = 0.80 * bs;
    } 
    else if (bs <= 20000) 
    {
        hra = 0.25 * bs;
        da = 0.90 * bs;
    } 
    else 
    {
        hra = 0.30 * bs;
        da = 0.95 * bs;
    }

    gs = bs + hra + da;

    cout << "Gross Salary = Rs. " << gs << endl;
}
