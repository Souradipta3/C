#include <stdio.h>
int main()
{
    int i=3;
    int *j=&i; // j will now store the address of i
    printf("Address of i is %u\n",&i); //%u data type is used to refer address of variable
    printf("Address of i is %u\n",j);
    printf("Value of i is %d\n",i);
    printf("Value of i is %d\n",*j); //'*' is used to refer the value of a variable stored in it
    printf("Address of j is %u\n",&j);
    printf("Value of j is %d\n",*(&j)); // *(&A or &a to &Z or &z) any variable is the format to refer the value of a variable which store the address of another variable
    return 0;
}
