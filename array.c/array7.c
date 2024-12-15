#include <stdio.h>
void print_table(int *mul_table,int num,int n)
{
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
    int mul_table[10][10];
    print_table(mul_table[0],1,10);
    print_table(mul_table[1],2,10);
    print_table(mul_table[2],3,10);
    print_table(mul_table[3],4,10);
    print_table(mul_table[4],5,10);
    print_table(mul_table[5],6,10);
    print_table(mul_table[6],7,10);
    print_table(mul_table[7],8,10);
    print_table(mul_table[8],9,10);
    print_table(mul_table[9],10,10);
   return 0;
}
