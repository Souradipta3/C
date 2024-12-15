#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[20];
}emply;

void show(emply emp) 
{
    printf("The e1 code is %d\n",emp.code);
    printf("The e1 salary is %f\n",emp.salary);
    printf("The e1 name is %s\n",emp.name);
}

int main()
{
    emply e1;
    emply *ptr=&e1;
    ptr->code=100;
    ptr->salary=50.50;
    strcpy(ptr->name,"RAJ");
    show(e1);
    return 0;
}
/*typedef is used to insert a user custom datatype. It helps us not write the same
struct _____ every time rather in place of it we write custom datatype.But it does not
mean that we cannot use the struct____ datatype with variable, we can use it too.*/