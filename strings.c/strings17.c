#include <stdio.h>
void decrypt(char *c)
{
    char *ptr=c;
    while(*ptr!='\0')
    {
       *ptr=*ptr-1; /*ascii value of a character in the string will be decremented by 1 
                     and previous value will get printed.*/
       *ptr++;
    }
}
int main()
{
    char c[]="SBK";
    decrypt(c);
    printf("The decrypted code will be %s",c);
    return 0;
}
