#include <stdio.h>
int main()
{
    FILE* fp=fopen("size.txt","w");
    char ch;
    while(1)
    {
        scanf("%c",&ch);
        if (ch=='$')
        break;
        else
        fputc(ch, fp);
    }
    fclose(fp);    
}