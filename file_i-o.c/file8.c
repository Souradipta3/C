#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Table.txt","w");
    int num;
    printf("Enter the number for generating the table:");
    scanf("%d",&num);
    for(int i=0;i<10;i++)
    {
        fprintf(ptr,"%d X %d = %d\n",num,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("Successfully generated and printed a table file");
    return 0;
}