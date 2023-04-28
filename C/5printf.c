#include <stdio.h>

int main()
{
    /*Using printf with FORMAT SPECIFIERS with single format specifier.*/

    printf("My favorite number is %d\n" , 11);

   /*Using two format specifiers at a time.*/

    printf("My favorite %s is %d\n" , "number" ,11);

    /*Creating variables to print values of format specifiers.*/

    int favNum = 11;  //favNum is an example of camelCasing
    printf("My favorite number is %d" , favNum);

    return 0;
}