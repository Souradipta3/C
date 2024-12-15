#include <stdio.h>
int main()
{
    int stu=2;
    int sub=4;
    int marks[2][4];
    for(int i=0;i<stu;i++)
    {
        for(int j=0;j<sub;j++)
        {
            printf("Enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<stu;i++)
    {
        for(int j=0;j<sub;j++)
        {
            printf("The marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
        }
    }
    return 0;
}
/* This is a 2D (2 dimensional) array as there is 2 layers of element present in the
code. The no of student and the no of subject are the main two concerns of the code.
Like 2D array there may be more dimensional array like 3D to nD also.*/
