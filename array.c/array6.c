#include <stdio.h>
int positive_count( int *arr,int n )
{
    int pcount=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]>0)
       {
        pcount++;
       }
       return pcount;
    }
}

int negetive_count( int *arr,int n )
{
    int ncount=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]<0)
       {
        ncount++;
       }
       return ncount;
    }
}        
     int main()
{
    int arr[]={-5,4,-3,2,-1,0,1,-2,3,-4,5};
    int i,n;
    positive_count(arr,n);
    negetive_count(arr,n);
    printf("The positive count is %d\n",positive_count(arr,n));
    printf("The negetive count is %d\n",negetive_count(arr,n));
    return 0;
}



/*
#include <stdio.h>
int countPositiveNumbers(int* arr, int n)
{
int pos_count = 0;
int i;
for (i = 0; i < n; i++) {
if (arr[i] > 0)
pos_count++;
}
return pos_count;
}
int countNegativeNumbers(int* arr, int n)
{
int neg_count = 0;
int i;
for (i = 0; i < n; i++) {
if (arr[i] < 0)
neg_count++;
}
return neg_count;
}
void printArray(int* arr, int n)
{
int i;

printf("Array: ");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
int main()
{
int arr[] = { 2, -1, 5, 6, 0, -3 };
int n;
n = sizeof(arr) / sizeof(arr[0]);

printArray(arr, n);

printf("Count of Positive elements = %d\n",
countPositiveNumbers(arr, n));
printf("Count of Negative elements = %d\n",
countNegativeNumbers(arr, n));

return 0;
}
*/