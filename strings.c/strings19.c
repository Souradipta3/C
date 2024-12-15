#include <stdio.h>
void character_check(char *str, char c)
{
    char *ptr=str;
    int i=0;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            printf("The given character is present in the string.\n");
            i++;
        }
        *ptr++;
    }
    if(i==0)
    {
        printf("The given character is not present in the string.\n");
    }
}
int main ()
{
    char str[]="SOURADIPTA";
    character_check(str,'R');
    return 0;
}
