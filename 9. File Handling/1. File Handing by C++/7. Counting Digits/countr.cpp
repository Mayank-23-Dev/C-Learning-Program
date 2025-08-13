#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("STR.txt");
    char ch;
    int count=0;
    while (fp.get(ch))
    {
        if (ch>='0' && ch<='9')
            count++;
        else if (ch=='$')
            break;
    }
    cout << "Number of digits in the file: " << count << endl;
    fp.close();
}