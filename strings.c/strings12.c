#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter the 1st string:\n");
    scanf("%s",&str1[0]); //input by using %s datatype
    printf("Enter the 2nd string:\n");
    int i;
    char c;
    while(c!='\n')
    {
        fflush (stdin); //it is used for using two scanf together in case of character datatype
        scanf("%c",&c); //input by using %c datatype (complicated)
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0'; //[i-1] is used exclude the \n so that the output remains same
    printf("The 1st string is %s\n",str1);
    printf("The 2nd string is %s\n",str2);
    printf("The strcmp of these two strings are %d\n",strcmp(str1,str2));
    return 0;
}
