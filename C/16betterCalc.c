#include <stdio.h>

int main()
{
    //declare variables
    double num1,num2;
    char op;

    printf( "Enter a no. : ");
    scanf( " %lf" , &num1);

    printf("Enter the operation : ");
    scanf( " %c" , &op); //we put a space before %c else it won't work

    printf("Enter a no. :");
    scanf( " %lf" , &num2);     //we can use float with double as double is akind of float

    if(op == '+')
    {
    printf( " %f" , num1 + num2);
    }

    else if(op == '-')
    {
        printf( " %f" , num1-num2);
    }

    else if(op == '/')
    {
    printf( " %f" , num1/num2);
    }

    else if(op == '*')
    {
        printf( " %f" , num1*num2);
    }
   
    else
    {
    printf("ERROR");
    }


    return 0;
}