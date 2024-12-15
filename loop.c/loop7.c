#include <stdio.h>
#include <math.h>
int main()
{
    int num,sum=0;
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        sum=sum+pow(i,i);
    }
    printf("Sum is %d",sum);
    return 0;
}