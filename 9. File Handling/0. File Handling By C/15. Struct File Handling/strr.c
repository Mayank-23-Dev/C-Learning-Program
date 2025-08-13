#include <stdio.h>
#include <stdlib.h>
struct class1
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
    
    struct class1 s;
    int i;
    for ( i = 0; i < 3; i++)
    {
        fscanf(fp,"%d\t%s%d\n",&s.r_num,&s.name,&s.age);
        printf("%d\t%s\t%d\n",s.r_num,s.name,s.age);
        fseek(fp,sizeof(s),1);
    }
    fclose(fp);
}