#include <stdio.h>
int main()
{
int op,a,b;
printf("Enter any two numbers:");
scanf("%d %d",&a,&b);
printf("Select any operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
scanf("%d",&op);
switch(op)
{
    case 1:
           printf("Sum of a and b : %d",a+b);
           break;
    case 2:
          printf("Difference of a and b: %d",a-b);
          break;
    case 3:
           printf("Product of a and b: %d",a*b);
           break;
    case 4:
          printf("Division of a and b: %d",a/b);
          break;

}

    return 0;
}