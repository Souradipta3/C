#include <stdio.h>
void fibonacci(int n);
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    fibonacci(num);
    return 0;
}
void fibonacci(int n)
{
    int n1=0,n2=1,n3,i;
    for(i=0;i<=n;i++)
    {
        printf("%d   ",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
}