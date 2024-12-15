#include <stdio.h>
#include <string.h> //This library is used for strcat().
int main()
{
    char str1[15]="SOURADIPTA";
    char *str2="SAHA";
    strcat(str1,str2); //strcat(1ststr,2ndstr); [format of strcat()].
    printf("Now the str1 is %s",strcat(str1,str2));
    return 0;
}
//strcat() is used for concatenate two string or joining it.
