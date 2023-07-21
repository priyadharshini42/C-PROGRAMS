#include<stdio.h>
struct emp
{
    char name[5];
    int id_no;
    int salary;
}e;
int main()
{
    printf("DETAILS OF EMPLOYEES:\n");
    scanf("%s %d %d",e.name,&e.id_no,&e.salary);
    scanf("%s %d %d",e.name,&e.id_no,&e.salary);
    scanf("%s %d %d",e.name,&e.id_no,&e.salary);
    printf("%s %d %d",e.name,e.id_no,e.salary);
    //printf("%s %d %d",e.name,e.id_no,e.salary);
    //printf("%s %d %d",e.name,e.id_no,e.salary);
}
