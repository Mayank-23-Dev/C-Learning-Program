#include <stdio.h>
int main()
{
    FILE* fp=fopen("Character.txt","w");
    char ch;
    scanf("%c",&ch);
    fputc(ch,fp);
    fclose(fp);
}