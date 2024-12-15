#include <stdio.h>
int main()
{
    FILE *ptr;
    int num1,num2,num3;
    ptr = fopen("Sample0.txt","r");
    if(ptr==NULL)
    {
        printf("This file does not exits!\n");
    }
    else
    {
    fscanf(ptr,"%d",&num1);
    
    printf("The num 1 in the file is %d\n",num1);
   
    fclose(ptr); 
    }
    return 0;
    }
