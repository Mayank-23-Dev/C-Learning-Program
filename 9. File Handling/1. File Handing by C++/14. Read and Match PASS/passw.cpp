#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("pass.txt");
    char ch;
    cout << "Enter Passwords: ";
    while (cin.get(ch)) 
    {
        if (ch == '\n')
            break;
        else
        fp.put(ch);
    }
    fp.close();
}