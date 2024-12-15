#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};

void show(struct employee emp) 
{
    printf("The e1 code is %d\n",emp.code);
    printf("The e1 salary is %f\n",emp.salary);
    printf("The e1 name is %s\n",emp.name);
}

int main()
{
    struct employee e1;
    struct employee *ptr=&e1;
    ptr->code=100;
    ptr->salary=50.50;
    strcpy(ptr->name,"RAJ");
    show(e1);
    return 0;
}
//Here in line 10 in place of emp same e1 name of variable in struct can also be used.
//This to how structures are passed into functions like others.
