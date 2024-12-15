#include <stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Enter the mass in kg:");
    scanf("%f", &m);
    printf("Force is %.2f",force(m)); 
    //.2 or any digit after decimal means to have output in that number of decimal places.
    return 0;
}
float force(float mass)
{
    return mass*9.8;
}
