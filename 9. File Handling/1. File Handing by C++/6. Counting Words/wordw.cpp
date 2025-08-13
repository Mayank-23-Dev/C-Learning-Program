#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fp("Sentence.txt");
    char ch;
    cout << "Enter a sentence (end with $) : ";
    while (true)
    {
        cin.get(ch);
        if (ch == '$')
            break;
        else
        fp.put(ch);
    }
}