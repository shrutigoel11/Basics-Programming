#include <stdio.h>

int main()
{
    int age = 30;
    int *pAge = &age;
    double gpa = 9.8;
    double *pGpa = &gpa;
    char grade = 'A';
    char *pGrade = &grade;

    printf(" age : %p\n gps : %p\n grade :%p\n", age , gpa , grade ); //accessing physical memory address
    
    return 0;
}