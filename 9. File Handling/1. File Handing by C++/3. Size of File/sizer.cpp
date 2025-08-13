#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("size.txt");
    char ch;
    int count = 0;
    while(fp.get(ch))
    {
        if (ch == '$')
        {
            cout << endl << "Stopped reading." << endl;
            break;
        }
        else
        count++;
    }
    cout << "Total Size of File : " << count << endl;
    fp.close();
}