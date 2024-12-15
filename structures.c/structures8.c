#include <stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector sum_vector(struct vector v1, struct vector v2)
{
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main()
{
    struct vector v1,v2, sum;
    v1.x=10;
    v1.y=20;

    v2.x=30;
    v2.y=40;

    sum=sum_vector(v1,v2);
    printf("The sum of X dimension is %d and the sum of Y dimension is %d",sum.x,sum.y);
    return 0;
}