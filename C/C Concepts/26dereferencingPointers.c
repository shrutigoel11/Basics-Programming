#include <stdio.h>

int main()
{
    int age = 30;
    int *pAge = &age;

    printf("%d\n" , *pAge); //dereferencing pointers-->now it is int as it is storing address of integer

    //alternatively , we can use age variable address to be dereferenced

    printf("%d\n" , *&age); //value print
    printf("%d\n" ,&*&age ); //memory address print
    printf("%d" , *&*&age); //value print
    
    return 0;
}