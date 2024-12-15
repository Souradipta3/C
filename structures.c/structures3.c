#include <stdio.h>
struct employee
{
    int code;
    float salary;
    char name[20]
};
int main()
{
    struct employee raj={100,50.50,"Souradipta"};
    printf("Code is %d\n",raj.code);
    printf("Salary is %f\n",raj.salary);
    printf("Name is %s\n",raj.name);
    return 0;
}
