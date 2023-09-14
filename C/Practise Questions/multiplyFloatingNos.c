#include <stdio.h>
int main()
{
    float a,b,c;
    //prompt the user
    printf("Enter two floating point numbers:");
    //taking input from user
    scanf("%f %f",&a,&b);
    //perform the operation
    c=a*b;
    //print the result
    printf("Product is:%f",c);
    return 0;
    }