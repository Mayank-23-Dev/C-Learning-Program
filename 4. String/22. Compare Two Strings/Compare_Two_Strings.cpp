#include <iostream>
using namespace std;
int main()
{
    string s1, s2;
    cout << "Enter First String-: ";
    getline(cin, s1);
    cout << "Enter Second String-: ";   
    getline(cin, s2);
    if (s1 == s2) 
    {
        cout << "Both strings are equal." << endl;
    } 
    else 
    {
        cout << "Strings are not equal." << endl;
    }
}