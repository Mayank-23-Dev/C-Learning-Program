#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("Character.txt");
    char ch;
    while (fp)
    {
        fp>>ch;
        cout<<ch;
    }
    fp.close();
}