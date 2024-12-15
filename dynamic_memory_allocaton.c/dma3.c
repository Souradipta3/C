#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*)calloc(6,sizeof(int));
    return 0;
}
/*Format:-
ptr=(casting*)calloc(No of arguments,What type of arguements)*/
