#include <iostream>
using namespace std;
main()
{
    char a;
    cout<<"Enter a alphabet-:";
    cin>>a;
    if (a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        cout<<"Alphabet "<<a<<" is a Vowel.";
    }
    else
    {
        cout<<"Alphabet "<<a<<" is not a Vowel.";;
    }
}