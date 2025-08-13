#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("Vowel.txt");
    char ch;
    cout << "Contents of the file but printed only Vowels:" << endl;
    while (fp.get(ch))
    {
        if (ch=='$')
            break;
        else if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {            
            cout << ch;   
        }
    }
    fp.close();
}