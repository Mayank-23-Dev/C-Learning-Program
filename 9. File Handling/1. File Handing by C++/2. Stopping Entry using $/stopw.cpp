#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("Character.txt");
    char ch;
    cout<<"Enter Content and Press $ to stop: ";
    while(1)
    {
        cin.get(ch);
        if(ch == '$')
        {
            cout<<endl<<"Stopped entry."<<endl;
            break;
        }
        else
        fp.put(ch);
    }
}