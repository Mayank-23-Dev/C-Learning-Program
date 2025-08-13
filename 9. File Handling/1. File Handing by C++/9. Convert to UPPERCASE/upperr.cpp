#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("upper.txt");
    char ch;
    cout << "Contents of the file in UPPERCASE:" << endl;
    while (fp.get(ch))
    {
        if (ch>='a' && ch<='z')
            ch=ch-32;
        cout << ch;
    }
    fp.close();
}