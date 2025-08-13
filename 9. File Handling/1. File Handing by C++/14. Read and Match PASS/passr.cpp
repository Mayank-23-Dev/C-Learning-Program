#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("pass.txt");
    char ch;
    int count=0;
    string pass;
    int i=0;
    int check=0;
    cout << "Enter Password to confirm : ";
    getline(cin,pass);
    while (fp.get(ch))
    {
        count++;
        if (ch == '\n')
        {
            break;
        }
        else if (ch != pass[i])
        {
            break;
            check=1;
        }
        else if (ch == pass[i])
        {
            i++;
        }
    }
    if (check==0 && i==count) 
    {
        cout<< "Password Matched" << endl;
    }
    else
    {
        cout << "Password Not Matched" << endl;
        cout << "Please try again.......Later" << endl;
    }
    fp.close();
}