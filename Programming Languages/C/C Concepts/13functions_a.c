#include <stdio.h>
void sayHi();   //EXPLICIT declaration of function
int main()
{
    sayHi();    //Function calling
    return 0;
}

void sayHi()   //Function definition  and if not declared explicitly this is called implicit declaration
{
    printf("Hello user");
}