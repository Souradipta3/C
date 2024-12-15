#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr= fopen("Sample3.txt","r");
    char c= fgetc(ptr);
    while(c!=EOF) // EOF = End Of File
    {
        printf("%c",c);
        c= fgetc(ptr);
    }
    fclose(ptr);
    return 0;
}