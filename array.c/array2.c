#include <stdio.h>
int main()
{
    int marks[5];
    for(int i=0;i<=4;i++)
    {
        printf("Enter the marks of the student %d\n",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<=4;i++)
    {
        printf("The marks of student %d are %d\n",i+1,marks[i]);
    }
    return 0;
}
