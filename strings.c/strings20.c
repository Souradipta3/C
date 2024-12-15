#include <stdio.h>
#include <stdlib.h>
void character_check(char *str, char c)
{
    char *ptr=str;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            printf("The given character is present in the string.\n");
            exit(0);
        }
        else
        {
            printf("The given character is not present in the string.\n");
            exit(0);
        }    
        *ptr++;
    }
}
int main ()
{
    char str[]="SOURADIPTA";
    character_check(str,'T');
    return 0;
}
//ERROR