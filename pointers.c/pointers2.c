#include <stdio.h>
void address(int a)
{
    printf("The address of a is %u",&a); /*The function defination
                                         can also be written at last
                                         like the other one's.Here it
                                         is written in the beggining.*/
}
int main()
{
    int i;
    address(i);
    printf("The address of i is %u",&i);
}
/*Here the address of both the variables (a,i) are different because
both are copies of one another but does not belong from the same
memory address.*/