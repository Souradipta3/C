#include <stdio.h>
void encrypt(char *c)
{
    char *ptr=c;
    while(*ptr!='\0')
    {
       *ptr=*ptr+1; /*ascii value of a character in the string will be incremented by 1 
                     and next value will get printed*/
       *ptr++;
    }
}
int main()
{
    char c[]="RAJ";
    encrypt(c);
    printf("The encrypted code will be %s",c);
    return 0;
}
