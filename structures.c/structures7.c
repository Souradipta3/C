#include <stdio.h>
struct vector
{
    int x;
    int y;
    int z;
};
int main()
{
struct vector v1,v2,v3;

v1.x=10;
v1.y=20;
v1.z=30;
printf("X,Y,Z dimensions of v1 are %d %d %d\n",v1.x,v1.y,v1.z);

v2.x=40;
v2.y=50;
v2.z=60;
printf("X,Y,Z dimensions of v2 are %d %d %d\n",v2.x,v2.y,v2.z);

v3.x=70;
v3.y=80;
v3.z=90;
printf("X,Y,Z dimensions of v3 are %d %d %d\n",v3.x,v3.y,v3.z);

return 0;
}
