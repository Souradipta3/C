#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    /*for(int i=0;i<5;i++)
    {
        printf("Enter the value of %d elements\n",i+1);
        scanf("%d",&ptr[i]);
    }*/
    for(int i=0;i<5;i++)
    {
        printf("The value of %d elements is %d\n",i+1,ptr[i]);
    }
    return 0;
}
//The output shows the proof that in case of calloc all the memory blocks are initialize with zero(0). 