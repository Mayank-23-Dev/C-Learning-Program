#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *fp=NULL;
    fp = fopen("abc.txt", "r");
    if (fp == NULL) 
    {
        printf("File not found\n");
        exit(1);
    }
    int pos = ftell(fp);
    printf("Current position in the file: %d\n", pos);
    char s[10];
    fgets(s, 10, fp);
    printf("Read string: %s\n", s);
    pos = ftell(fp);
    printf("Position Pointer: %d\n", pos);
    fseek(fp, -2, 1);
    pos = ftell(fp);
    printf("Position Pointer after fseek: %d\n", pos);
    fgets(s, 10, fp);
    printf("Read string: %s\n", s);
    pos = ftell(fp);
    printf("Position Pointer: %d\n", pos);
    fclose(fp);
    return 0;
}