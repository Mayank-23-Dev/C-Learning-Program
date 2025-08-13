#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fp("Story.txt");
    char ch;
    int count=0;
    while(fp.get(ch))
    {
        if(ch=='$')
            break;
        else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            count++;
        }
    }
    cout << "Number of vowels in the file: " << count << endl;
    fp.close();
}    