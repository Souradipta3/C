#include <stdio.h>
//JOY JAGANNATH
int main()
{
	int number1_, number2_, number3_;
	printf("Enter number1_ \n");
	scanf("%d", &number1_);
	printf("Enter number2_ \n");
	scanf("%d", &number2_);
	printf("Enter number3_ \n");
	scanf("%d", &number3_);
	if(number1_>number2_ && number1_>number3_)
	{
		printf("Number 1 is the greatest \n");
	}
	else if(number2_>number1_ && number2_>number3_)
	{
		printf("Number 2 is the greatest \n");
	}
	else if(number3_>number1_ && number3_>number2_)
	{
		printf("Number 3 is the greatest \n");
	}
	return 0;
}

