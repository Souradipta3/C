#include <stdio.h>
//JOY MA TARA
int main()
{
char alphabet;
printf("Enter a alphabet \n");
scanf("%c", &alphabet);
//97-122= lowercase
//65-90= Uppercase
if(alphabet>=65 && alphabet<=90)
{
	printf("It is uppercase \n");
}
if(alphabet>=97 && alphabet<= 122)
{
	printf("It is lowercase");
}
	return 0;
	}
	
