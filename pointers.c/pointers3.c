#include <stdio.h>
void tentimes(int *a);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    tentimes(&n);
    printf("The value after tentimes is %d",n);
    return 0;
}
void tentimes(int *a)
{
    *a  = *a *10; 
}
