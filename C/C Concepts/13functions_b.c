#include <stdio.h>

void sayHi();

int main()
{ 
sayHi("Shruti", 19);  //Providing value to parameter
return 0;
}

void sayHi(char name[], int age)   //Parameters
{
    printf("Hello %s , %d", name , age);
}