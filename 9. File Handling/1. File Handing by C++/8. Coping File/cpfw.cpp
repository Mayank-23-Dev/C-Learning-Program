#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("sent.txt");
    char ch;
    cout << "Enter text (end with $):" << endl;
    while (cin.get(ch)) 
    {
        if (ch == '$')
            break;
        else
        fp.put(ch);
    }
    fp.close();
}