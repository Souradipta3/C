#include <stdio.h>
int main()
{
    int num, factorial=1;
    printf("Enter a number=>");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        factorial*=i;
    }
    printf("The value of the factorial %d in %d", num,factorial);
    return 0;
}
