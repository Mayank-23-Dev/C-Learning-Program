#include <iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << "It is an alphabet." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "It is a digit." << endl;
    }
    else
    {
        cout << "It is a special character." << endl;
    }
}
