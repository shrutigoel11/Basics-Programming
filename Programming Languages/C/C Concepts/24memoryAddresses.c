#include <stdio.h>

int main()
{
    int age = 30;
    double gpa = 9.8;
    char grade = 'A';

    printf(" age : %p\n gps : %p\n grade :%p\n", &age , &gpa ,&grade ); //accessing physical memory address
    
    return 0;
}