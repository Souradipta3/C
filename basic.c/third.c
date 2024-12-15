#include <stdio.h>
//JOY MA TARA
int main()
{
	int marks;
	printf("What is your marks?");
	scanf("%d", &marks);
	if(marks>=90 && marks<=100)
	{
		printf("Your grade is A \n");
	}
	else if(marks>=80 && marks<=89)
	{
		printf("Your grade is B \n");
	}
	else if(marks>=70 && marks<=79)
	{
		printf("Your grade is C \n");
	}
	else if(marks>=60 && marks<=69)
	{
	    printf("Your grade is D \n");
	}
	else if(marks>=50 && marks<=59)
	{
		printf("Your grade is E \n");
	}
	else if(marks<50)
	{
		printf("Fail");
	}
	else 
	{
		printf("Invalid marks");
	}
			return 0;
		}
		
