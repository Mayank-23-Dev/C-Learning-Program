#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("upper.txt");
    char ch;
    cout << "Enter characters (Stop with $): ";
    while (cin.get(ch)) 
    {
        if (ch == '$')
            break;
        else
        fp.put(ch);
    }
    fp.close();
}