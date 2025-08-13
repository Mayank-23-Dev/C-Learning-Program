#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    FILE *fp = NULL;
    fp = fopen("saras", "rb");
    if (fp == NULL)
    {
        printf("Error!!! Memory is Full");
        exit(0);
    }
    struct student s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        fread(&s[i], sizeof(s[i]), 1, fp);
        printf("Name: %s, Age: %d\n", s[i].name, s[i].age);
    }
    fclose(fp);
    return 0;
}