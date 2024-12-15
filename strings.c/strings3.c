#include <stdio.h>
int main()
{
    char s[15];
    printf("Enter your name!");
    scanf("%s",&s[0]); // OR scanf("%s",s);
    printf("Your name is %s",s);
    return 0;
}
