#include <stdio.h>
int main()
{
    int arr[10];
    int *ptr=&arr[0];
    ptr=ptr+2;
    if(ptr==&arr[2])
    {
        printf("Both points to the same memory location.");
    }
    else
    {
        printf("Both does not point to the same memory location.");
    }
    return 0;
}
