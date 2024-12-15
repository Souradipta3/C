#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    fgets(str,100,stdin);
    printf("The reverse string is %s",strrev(str));
    return 0;
}
