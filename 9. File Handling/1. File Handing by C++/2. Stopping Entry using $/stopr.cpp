#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("Character.txt");
    char ch;
    while (fp.get(ch)) 
    {
        if (ch == '$')
        {
            cout<<endl<<"Stopped reading."<<endl;
            break;
        }
        cout << ch;
    }
    fp.close();
    cout <<endl<<"Content successfully read."<<endl;
}