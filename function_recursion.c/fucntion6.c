#include <stdio.h>
void gcd(int a,int b);
int main()
{
    int n1,n2;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    gcd(n1,n2);
    return 0;
}
void gcd(int a,int b)
{
    int g,i;
   for(i=1;i<=a && i<=b;i++)
   {
    if(a%i==0 || b%i==0)
    {
        g=i;
    }
    printf("GCD is %d\n",g);
   } 
}
