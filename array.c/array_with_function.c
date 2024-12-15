#include <stdio.h>
/*void printarray(int *ptr, int n)
{
for(int i=0;i<n;i++)
{
    printf("The value of %d is %d\n",i+1,*(ptr+i));
}    
}*/

//Above method is same as the bottom method 

void printarray(int ptr[], int n)
{
for(int i=0;i<n;i++)
{
    printf("The value of %d is %d\n",i+1,ptr[i]);
}  
ptr[2]=200; //This will change the value in the arr fucntion of main
}

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    printarray(arr,10);
    printf("%d",arr[2]);
    return 0;
}
