#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Sample3.txt","r");
    char c=fgetc(ptr);
    //fgetc is used for reading a file character by character; 
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    printf("The file character is %c\n",fgetc(ptr));
    fclose(ptr);
    return 0;
}