#include <stdio.h>
int main()
{
    FILE* fp=fopen("Sent.txt","w");
    printf("Enter the a String and press $ to end-:\n");
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