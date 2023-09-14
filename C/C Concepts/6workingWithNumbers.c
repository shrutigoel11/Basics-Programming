#include <stdio.h>

int main()
{
    printf ( "%f\n" , 6.0 ); //simple printf usage
    printf ( "%f\n" , 3.0+3.0); // performing arithmatic operations with nos.
    
    /*creating variables*/

    int num = 8/7; // arithmatic operations of int/ int will result in int.

    printf("%d\n", num);

    /*C provides vast number of functions for mathematical operations.*/

    printf ("%f\n",  pow(2 , 3) );

    return 0;
}