#include <stdio.h>
void reverse(int *arr, int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp;
        temp= arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]= temp;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0;i<7;i++)
    {
        printf("The value of %d element is %d\n",i,arr[i]);
    }
    return 0;
}
/*Here in the above funtion the for loop limit is given upto
the half of the elements i.e n/2 because the swaping is done 
for the first half of the elements and if it is done for all
the elemts then 2 times swapping would cause the same result
as the input i.e. without swapping. */