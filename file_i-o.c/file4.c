#include <stdio.h>
int main()
{
    FILE *ptr;
    int num=3113;
    ptr=fopen("Sample2.txt","w");
    fprintf(ptr,"The number is %d",num);
    //fprintf is used to write in a file
    fclose(ptr);
    return 0;
}
