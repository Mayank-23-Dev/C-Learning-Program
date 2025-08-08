#include <stdio.h>
int main()
{
    FILE* fp=fopen("Stop.txt","w");
    printf("Enter data before pressing $ sign ");
    char ch;
    while(1)
    {
        scanf("%c",&ch);
        if(ch=='$')
        break;
        else
        fputc(ch,fp);
    }
    fclose(fp);
}