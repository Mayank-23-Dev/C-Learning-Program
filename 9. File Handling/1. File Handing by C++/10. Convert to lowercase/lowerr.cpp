#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("lower.txt");
    char ch;
    cout << "Contents of the file in Lower Case:" << endl;
    while (fp.get(ch))
    {
        if (ch>='A' && ch<='Z')
            ch=ch+32;
        cout << ch;
    }
    fp.close();
}