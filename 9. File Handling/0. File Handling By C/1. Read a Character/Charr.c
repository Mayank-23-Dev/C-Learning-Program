#include<stdio.h>
int main()
{
    FILE* fp=fopen("Character.txt","r");
    char ch;
    ch=fgetc(fp);
    printf("%c", ch);
    fclose(fp);
}