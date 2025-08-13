#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("title.txt");
    char ch;
    int nw=1;
    cout << "Contents of the file in TITLE Case:" << endl;
    while (fp.get(ch))
    {
        if (ch == ' ' || ch == '\n')
        {
            nw = 1;
            cout << ch;
        }
        else if (nw == 1)
        {
            if (ch >= 'a' && ch <= 'z')
                ch=ch-32;
            cout<<ch;
            nw = 0;
        }
        else
        {
            cout<<ch;
        }
    }
    fp.close();
}