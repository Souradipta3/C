#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[20];
};
int main()
{
    struct employee facebook[100];

    facebook[0].code=100;
    facebook[0].salary=100.50;
    strcpy (facebook[0].name,"RAJ");

    facebook[1].code=101;
    facebook[1].salary=101.50;
    strcpy (facebook[1].name,"SANKU");

    facebook[2].code=102;
    facebook[2].salary=102.50;
    strcpy (facebook[2].name,"BANKU");
    
    printf("RAJ employee details are %d %f %s \n",facebook[0].code,facebook[0].salary,facebook[0].name);
    printf("SANKU employee details are %d %f %s \n",facebook[1].code,facebook[1].salary,facebook[1].name);
    printf("BANKU employee details are %d %f %s \n",facebook[2].code,facebook[2].salary,facebook[2].name);

    return 0;
}
