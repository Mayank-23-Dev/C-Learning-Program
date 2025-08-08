#include <stdio.h>
#include <stdlib.h>
struct class
{
    int r_num;
    char name[20];
    int age;
};
int main()
{
    FILE *fp=NULL;
    fp=fopen("Class_XII.txt","r");
    if(fp==NULL)
    {
        printf("Error!! File Not Found.");
        exit(0);
    }
    int n=3;
    // printf("Enter the Number of Student Entries Do you Want: ");
    // scanf("%d",&n);
    struct class s[n];
    int i;
    for ( i = 0; i < n; i++)
    {
        if(fscanf(fp,"%d\t%s\t%d\n",&s[i].r_num,&s[i].name,&s[i].age));
        printf("%d\t%s\t%d\n",s[i].r_num,s[i].name,s[i].age);
    }
    fclose(fp);
}