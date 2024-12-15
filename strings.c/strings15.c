#include <stdio.h>
char strcpy(char *str2, char *str1)
{
 char *ptr=str1;
 int i;
 while(*ptr!='\0')
   {
     i++; 
     ptr++;
    }
}
int main()
{
    char str1[]="SOURADIPTA";
    char str2[]="SAHA";
    int cpy= strcpy(str2,str1);
    printf("The string str2 is now is %s",str1);
    return 0;
}
