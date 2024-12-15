#include <stdio.h>
void sum_and_avg(int a, int b, int *sum, float *avg)
{
    *sum=a+b;
    *avg=(float)(*sum)/2;
} 
int main()
{
    int i,j,sum;
    float avg;
    printf("Enter two numbers:");
    scanf("%d %d",&i,&j);
    sum_and_avg(i,j,&sum,&avg);
    printf("The sum is %d\n",sum);
    printf("The avg is %f\n",avg);
    return 0;
}
