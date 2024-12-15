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
    struct employee e1;
    struct employee *ptr=&e1;
    ptr->code=100;
    printf("The e1 code is %d\n",(*ptr).code);
    (*ptr).salary=50.05;
    printf("The e2 salary is %f\n",e1.salary);
    strcpy(ptr->name,"RAJ");
    printf("THe e1 name is %s\n",ptr->name);
    return 0;
}
//Both the above process are correct in case of a pointer in a structure.
//In place of(*ptr).____ we can also use arrow operator i.e ptr->____.
