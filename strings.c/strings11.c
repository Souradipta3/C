#include <stdio.h>
#include <string.h> //This library is used for strcmp().
int main()
{
    char  str1[15]="HELLO";
    char *str2="HARRY";
    int val=strcmp(str1,str2); //strcmp(1ststr,2ndstr); [format of strcmp()].
    printf("Now the val is %d",val);
    return 0;
}
//strcmp() is used for comparing more than one string.
