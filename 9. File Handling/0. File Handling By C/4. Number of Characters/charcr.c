#include <stdio.h>
int main() 
{
    FILE* fp=fopen("char.txt", "r");
    char ch;
    int count=0;
    while ((ch=fgetc(fp))!= EOF)
    {
        count++;
    }
    printf("Number of characters: %d",count);
    fclose(fp);
}