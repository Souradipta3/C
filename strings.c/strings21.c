#include <stdio.h>
#include <string.h>
int main()
{
    char str1[]="SOURO";
    char str2[]="priyo";
    strlwr(str1);
    strupr(str2);
    printf("%s\n",str1);
    printf("%s\n",str2);
    return 0;
}
