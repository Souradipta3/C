#include <stdio.h>
#include <string.h>

struct bank
{
    int account_no;
    int amount;
    int opening_year;
    char name[30];
};

int main()
{

    struct bank a1;
    a1.account_no=1000;
    a1.amount=10000;
    a1.opening_year=2000;
    strcpy(a1.name,"RAJ");

    printf("a1 account number is:%d\n",a1.account_no);
    printf("a1 amount is:%d\n",a1.amount);
    printf("a1 opening year is:%d\n",a1.opening_year);
    printf("a1 name is:%s\n",a1.name);

    struct bank a2={2000,20000,2001,"SANKU"};

    printf("a2 account number is:%d\n",a2.account_no);
    printf("a2 amount is:%d\n",a2.amount);
    printf("a2 opening year is:%d\n",a2.opening_year);
    printf("a2 name is:%s\n",a2.name);

    struct bank a3;
    printf("Enter a3 account number:");
    scanf("%d",&a3.account_no);
    printf("Enter a3 amount:");
    scanf("%d",&a3.amount);
    printf("Enter a3 opening year:");
    scanf("%d",&a3.opening_year);
    printf("Enter a3 name:");
    scanf("%s",&a3.name);

    printf("a3 account number is:%d\n",a3.account_no);
    printf("a3 amount is:%d\n",a3.amount);
    printf("a3 opening year is:%d\n",a3.opening_year);
    printf("a3 name is:%s\n",a3.name);

    return 0;
}
