#include <stdio.h>
int main()

/* This program is to show that an integer consits of 4 bytes
for which the address where the int i is stored is incremented by
incrementing the pointer (ptr) resulting in skipping of 4 addresses
while printing it.*/ 
{
    /*int i=3;
    int *ptr=&i;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);*/

/*In the 2nd program address are incremented as usual by
incrementing the pointer (ptr) but here address gets print by skipping
1 as character data type is of 1 byte and stores 1 byte in memory.*/

    /*char i=3;
    char *ptr=&i;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);*/

    /*Similar as the first one in case of float datatype
    as it also consists of 4 bytes.*/

    /*float i=3;
    float *ptr=&i;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);
    ptr++;
    printf("The address of i is %u\n",ptr);*/
    return 0;
}

/*So lastly it is seen that storage value of data in the memory 
depends on the data type of it.*/
