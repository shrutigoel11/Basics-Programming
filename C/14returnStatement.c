#include <stdio.h>

double cube(double num)
{
    return num*num*num ;    //or you can create a variable and store result in it --> double result = num*num*num; return result; 

    /* if we write anything below return statement it will never gonna be executed.
    this is because return statement breaks out of the function.  */
}

int main()
{
printf("Cube is :%f" , cube(3.0));
return 0;
}

//if you want to declare a function here we need protyping --> proving signature of function (same first line in declaration --> returntype fn_name (parameters))