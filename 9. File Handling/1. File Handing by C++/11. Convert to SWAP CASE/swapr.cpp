#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("Swap.txt");
    char ch;
    cout << "Contents of the file in Swaped Case:" << endl;
    while (fp.get(ch))
    {
        if (ch>='A' && ch<='Z')
            ch=ch+32;
        else if (ch>='a' && ch<='z')
            ch=ch-32;
        cout << ch;
    }
    fp.close();
}