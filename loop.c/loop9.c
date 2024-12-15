#include <stdio.h>
int main()
{
    int num1,num2,sum,dif,mul;
    float div;
    char ch;
    do
    {
        printf("Enter a operator:\n");
        printf("Type q to exit.\n");
        scanf(" %c",&ch);
        if(ch== 'q')
        {
         printf("Thank you!");
         break;
        }
         printf("Enter two numbers:");
         scanf("%d %d",&num1,&num2);
         switch(ch)
       {
         case'+': sum=num1+num2;
         printf("%d+%d=%d\n",num1,num2,sum);
         break;
         case'-': dif=num1-num2;
         printf("%d-%d=%d\n",num1,num2,dif);
         break;
         case'*':mul=num1*num2;
         printf("%d*%d*=%d\n",num1,num2,mul);
         break;
         case'/':
         if(num2==0)
           {
             printf("Division is impossible");
           }
         else
           {
             div=num1/num2;
             printf("%d/%d=%f\n",num1,num2,div);
           }
         break;
         deafult:printf("Invalid");
         break;
        }
     } while(1);
    return 0;
}
