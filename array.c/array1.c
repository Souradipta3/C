#include <stdio.h>
int main()
{
    int marks[3];
    printf("Enter the three marks:");
    scanf("%d %d %d",&marks[0],&marks[1],&marks[2]);
    printf("The 3 marks are %d %d %d",marks[0],marks[1],marks[2]);
    return 0;
}