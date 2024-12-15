#include <stdio.h>
int sum (int n);
int main()
{
    int num;
    printf("Enter a number=>");
    scanf("%d",&num);
    printf("Sum is %d", sum(num));
    return 0;
}
int sum(int n)
{
    if(n!=0)
    {
        return n+sum(n-1);
    }
    else
    {
        return n;
    }
}
