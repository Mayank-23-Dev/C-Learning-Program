#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("size.txt");
    char ch;
    while (true)
    {
        cin.get(ch);
        if (ch=='$')
        {
            cout<<"Exiting..."<<endl;
            break;
        }
        else
            fp.put(ch);
    }
    fp.close();
}