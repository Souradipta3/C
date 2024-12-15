#include <stdio.h>
typedef struct complex_numbers
{
    float real;
    float img;   
}complex;
complex add(complex x, complex y)
{
    complex temp;
    temp.real= x.real+y.real;
    temp.img=x.img+y.img;
    return temp;
}
int main()
{
    complex x,y,result;
    printf("Enter the real and imaginary parts for the first complex number:\n");
    scanf("%f %f",&x.real,&x.img);
    printf("Enter the real and imaginary parts for the second complex number:\n");
    scanf("%f %f",&y.real,&y.img);
    result= add(x,y);
    printf("SUM = %1f+%1f",result.real,result.img);
    return 0;
}
