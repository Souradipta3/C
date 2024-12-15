#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Sample4.txt","w");
    fputc('R',ptr);
    fputc('A',ptr);
    fputc('J',ptr);
    //putc is used for writing a file character by character
    fclose(ptr);
    return 0;
}
