#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("Story.txt");
    char ch;
    cout << "Enter the text (end with $):" << endl;
    while (true)
    {
        cin.get(ch);
        if (ch == '$')
            break;
        else
            fp.put(ch);
    }
    fp.close();
}