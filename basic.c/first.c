#include <stdio.h>
// JOY MA TARA 
int main()
{
	int principal;
	printf("What is the principal amount?", principal);
	scanf("%d", &principal);
	float rate;
	printf("What is the rate of interest?", rate);
	scanf("%f", &rate);
	int time;
	printf("What is the time in years?", time);
	scanf("%d", &time);
	printf("The simple interest is %f", principal*rate*time/100);
	return 0;
}

