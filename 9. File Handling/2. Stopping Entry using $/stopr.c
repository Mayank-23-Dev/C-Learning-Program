#include <stdio.h>
int main()
{
    FILE* fp=fopen("Stop.txt","r");
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
}