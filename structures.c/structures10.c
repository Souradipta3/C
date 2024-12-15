#include <stdio.h>
struct complex
{
    int real;
    int imag;
};
void display(struct complex c)
{
    printf("The real value number is %d\n",c.real);
    printf("The imaginary value number is %d\n",c.imag);
}
int main()
{
    struct complex c_nums[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter the real value for %d num:\n",i+1);
        scanf("%d",&c_nums[i].real);

        printf("Enter the imaginary value for %d num:\n",i+1);
        scanf("%d",&c_nums[i].imag);
    }
    for(int i;i<5;i++)
    {
        display(c_nums[i]);
    }
    return 0;
}
