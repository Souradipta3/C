#include <stdio.h>
int strlen(char *str)
{
 char *ptr=str;
 int len=0;
 while(*ptr!='\0')
   {
     len++;
     ptr++;
    }
 return len;
}
int main()
{
    char str[]="SOURADIPTA";
    int len=strlen(str);
    printf("The length of the word is %d",len);
    return 0;
}
