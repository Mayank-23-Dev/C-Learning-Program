#include <iostream>
using namespace std;

int main() 
{
    char ch;

    cout << "Enter any character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The character '" << ch << "' is a capital letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "The character '" << ch << "' is a small letter." << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "The character '" << ch << "' is a digit." << endl;
    }
    else
    {
        cout << "The character '" << ch << "' is neither a letter nor a digit." << endl;
    }
}
