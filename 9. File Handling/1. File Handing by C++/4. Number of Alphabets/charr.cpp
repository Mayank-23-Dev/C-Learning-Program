#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("char.txt");
    char ch;
    int count=0;
    while(fp.get(ch))
    {
        if (ch == '$')
        break;
        else if (ch>='A' && ch<='Z' || ch>='a' && ch<='z')
        {
            count++;
        }
    }
    cout << "Total number of Alphabets : " << count << endl;
}