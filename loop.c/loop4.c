#include <stdio.h>
//JOY MA TARA
int main()
{
    int num,sum=0;
    printf("Enter a number=>");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        sum+=num*i;
     printf("%d*%d=%d\n", num,i,num*i);
    }
    printf("The sum of the multiplication numbers is %d\n",sum);
    return 0;
}
