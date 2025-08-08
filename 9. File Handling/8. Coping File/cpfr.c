#include <stdio.h>
int main()
{
    FILE* fp=fopen("Sent.txt","r");
    char ch;
    FILE* fp1=fopen("Senta.txt","w");
    while((ch=fgetc(fp))!=EOF)
    {
        fputc(ch,fp1);
    }
    fclose(fp);
}