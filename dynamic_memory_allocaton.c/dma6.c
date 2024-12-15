#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr1;
    int *ptr2;
    ptr1=(int*)calloc(500,sizeof(int));
    for(int i=0;i<500;i++)
    {
        ptr2=(int*)calloc(500,sizeof(int));
        printf("Enter the value of %d elements\n",i+1);
        scanf("%d",&ptr1[i]);
        free(ptr2);
    }
    for(int i=0;i<5;i++)
    {
        printf("The value of %d elements is %d\n",i+1,ptr1[i]);
    }
    return 0;
}
//Like fclose(ptr) in FILE I/O we use free(ptr) to deallocate the memory
//It saves/free the memory blocks which is already allocated by malloc or calloc