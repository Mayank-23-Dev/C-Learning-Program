#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("char.txt");
    char ch;
    while(1)
    {
        cin.get(ch);
        if (ch == '$')
        {
            cout << "Exiting..." << endl;
            break;
        }
        else
        fp.put(ch);
    }
    fp.close();
}