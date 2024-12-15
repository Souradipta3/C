#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("Enter the number of integer:\n");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of %d elements\n",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("The value of %d elements is %d\n",i+1,ptr[i]);
    }
    return 0;
}
