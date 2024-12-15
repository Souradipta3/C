#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee e1,e2,e3;

    printf("Enter the code, salary, name of e1: ");
    scanf("%d %f %s",&e1.code,&e1.salary,e1.name);

    printf("Enter the code, salary, name of e2: ");
    scanf("%d %f %s",&e2.code,&e2.salary,e2.name);

    printf("Enter the code, salary, name of e3: ");
    scanf("%d %f %s",&e3.code,&e3.salary,e3.name);

    printf("The e1 employee details are %d %f %s \n",e1.code,e1.salary,e1.name);
    printf("The e2 employee details are %d %f %s \n",e2.code,e2.salary,e2.name);
    printf("The e3 employee details are %d %f %s \n",e3.code,e3.salary,e3.name);

    return 0;
}
