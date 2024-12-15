#include <stdio.h>
void slice(char *str, int m, int n)
{
    int i=0;
    while((i+m)<=n)
    {
        str[i]=str[i+m];
        i++;
    }
    str[i]='\0';
} 
int main()
{
    char str[]="SOURADIPTA";
    slice(str,2,8);
    printf("%s",str);
    return 0;
}
