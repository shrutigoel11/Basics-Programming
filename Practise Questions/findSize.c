#include <stdio.h>

int main()
{
    int intsize;
    float floatsize;
    double doublesize;
    char  charsize;
//sizeof operator provides size of any datatype
    printf("Size of int : %d\n",sizeof(intsize));
    printf("Size of float : %d\n",sizeof(floatsize));
    printf("Size of double : %d\n",sizeof(doublesize));
    printf("Size of character : %d\n",sizeof(charsize));
    
    return 0;
}


