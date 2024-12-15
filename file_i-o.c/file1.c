#include <stdio.h>
int main()
{
    FILE *ptr;
    //ptr = fopen("Sample.txt","r"); //-->'r' for reading the file
    //ptr = fopen("Sample.txt","w"); //-->'w' for writing the file
    //ptr = fopen("Sample1.txt","rb"); //-->'rb' for reading binary file
    //ptr = fopen("Sample1.txt","wb"); //-->'wb' for writing binary file
    //ptr = fopen("Sample.txt","a"); //-->'rb' for append the file
    return 0;
}
/* FORMAT:-
   FILE *ptr;
   ptr=fopen("file name.file type","mode"); */
/* Note:-
1.Append means to add something to the end of the content in a file
2.While running 'rb' with a empty file name or with not existing
file name then it will give NULL
3.But running 'wb' for a empty file name or not existing file name
then it will create a new file of the given name */