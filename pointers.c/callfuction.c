#include <stdio.h>
void wrongswap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x=3,y=9;
    printf("The value of x and y before swapping is %d and %d\n",x,y);
    //wrongswap(x,y); //will not work as it is call by value
    swap(&x,&y); //will work as it is call by reference
    printf("The value of x and y after swapping is %d and %d\n",x,y);
    return 0;
}
void wrongswap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
