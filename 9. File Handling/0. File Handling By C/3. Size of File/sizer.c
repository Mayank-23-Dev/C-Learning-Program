#include <stdio.h>
int main()
{
    FILE* fp=fopen("size.txt", "r");
    char ch;
    int count=0;
    while((ch=fgetc(fp))!= EOF)
    {
        count++;
    }
    printf("Size of file: %d bytes", count);
    fclose(fp);
}