#include <stdio.h>
int main()
{
    FILE *fp=fopen("str.txt", "r");
    char ch;
    int count = 0;
    while ((ch = fgetc(fp)) != EOF) 
    {
        if (ch >= '0' && ch <= '9')
        {
            count++;
        }
    }
    printf("The number of digits in the file is: %d\n", count);
    fclose(fp);
}