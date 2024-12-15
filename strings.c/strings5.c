#include <stdio.h>
int main()
{
    char s[30];
    printf("Enter your name!");
    gets(s);
    puts(s);
    return 0;
}
/*gets()is used for taking input strings with one space and puts() is used
for taking input strings with multiple spaces. NOTE:- In case of puts()
printing it sperately is not needed it gets directly printed.*/