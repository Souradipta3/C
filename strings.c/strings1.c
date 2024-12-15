#include <stdio.h>
int main()
{
    char str[]={"R A J"};
    //char str[]={'R','A','J','\0'}; //Same as line 4.
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
