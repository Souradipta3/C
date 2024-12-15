#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int)); //realloc can be used with calloc
    //ptr=(int*)malloc(5*sizeof(int)); //realloc can be used with malloc
    for(int i=0;i<5;i++)
    {
        printf("Enter the value of %d elements\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("The value of %d elements is %d\n",i+1,ptr[i]);
    }
    
    //size of allocation is increased/decreased by using realloc
    
    ptr=realloc(ptr,10*sizeof(int));   //size is increased
    //ptr=realloc(ptr,3*sizeof(int));  //size is decreased
    for(int i=0;i<10;i++)
    {
        printf("Enter the value of %d elements\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("The value of %d elements is %d\n",i+1,ptr[i]);
    }
    return 0;
}
/*FORMAT:-
ptr=realloc(ptr,new size);*/

//realloc is used to increase/decrease the size of memory allocated by malloc or calloc.
