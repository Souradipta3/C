#include <stdio.h>
struct date
{
    int day;
    int month;
    int year;
};

void display(struct date a, struct date b)
{
    printf("The d1 date is %d/%d/%d\n",a.day,a.month,a.year);
    printf("The d2 date is %d/%d/%d\n",b.day,b.month,b.year);
}

int datecmp(struct date a,struct date b)
{
    if(a.year>b.year||a.month>b.month||a.day>b.day)
    {
        return 1;
    }
    else if(a.year<b.year||a.month<b.month||a.day<b.day)
    {
        return -1;
    }
}

int main()
{

    struct date d1,d2;
    printf("Enter the d1 day:");
    scanf("%d",&d1.day);
    
    printf("Enter the d1 month:");
    scanf("%d",&d1.month);
    
    printf("Enter the d1 year:");
    scanf("%d",&d1.year);

    printf("Enter the d2 day:");
    scanf("%d",&d2.day);
    
    printf("Enter the d2 month:");
    scanf("%d",&d2.month);
    
    printf("Enter the d2 year:");
    scanf("%d",&d2.year);

    display(d1,d2);
    int c=datecmp(d1,d2);
    printf("Date comparison function returns %d",c);
    
    return 0;
}