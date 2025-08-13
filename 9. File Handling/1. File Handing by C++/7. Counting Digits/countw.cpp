#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("STR.txt");
    char ch;
    cout << "Enter a string (end with $) : ";
    while (true)
    {
        cin.get(ch);
        if (ch == '$')
            break;
        else
            fp.put(ch);
    }
    fp.close();
}