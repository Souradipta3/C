#include <stdio.h>
int main()
{
    FILE *ptr;
    int num1,num2,num3;
    ptr = fopen("Sample.txt","r");
    //fscanf is used to read in a file
    fscanf(ptr,"%d",&num1);
    fscanf(ptr,"%d",&num2);
    fscanf(ptr,"%d",&num3);
    fclose(ptr);
    printf("The num 1 in the file is %d\n",num1);
    printf("The num 2 in the file is %d\n",num2);
    printf("The num 3 in the file is %d\n",num3);
    //fclose(ptr); 
    //In the middle or at last it can  be used as shown to close the file and to release the resources it has used.
    return 0;
}
