#include <stdio.h>
float average(int a, int b, int c);
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a, &b, &c);
    printf("The average is %f",average(a,b,c));
    return 0;
}
float average(int a, int b, int c)
{
    return (float)(a+b+c)/3;
}
