#include <stdio.h>
void print_table(int mul_table[m],int num,int n,)
{
    printf("Enter the no. of tables:");
    printf("Enter the digit for the table:\n");
    printf("Enter limit for the table:\n");
    scanf("%d",&mul_table[m]);
    scanf("%d",&num);
    scanf("%d",&n);
    printf("The multiplication table of %d is:\n",num);
    for(int i=0;i<n;i++)
    {
        mul_table[i]=num*(i+1);
    }
    for(int i=0;i<n;i++)
    {
        printf("%dX%d=%d\n",num,i+1,mul_table[i]);
    }
    printf("******************************\n");
}
int main()
{
    int num,n,m;
    int mul_table[num][n];
    print_table(mul_table[m],num,n);
   return 0;
}
