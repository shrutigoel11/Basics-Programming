#include <stdio.h>
#include <math.h> //for using mathematical operations we use this haeder file

int main()
{
    float a,b,c,discriminant,root1,root2;
    printf("Enter coefficients of equation--> ax^2 + bx+ c:");
    scanf("%f %f %f",&a,&b,&c);
    printf("Equation is: %.fx^2 + %.fx + %.f\n",a,b,c);
    discriminant=b*b-4*a*c;
    /*three conditions arises: 
    1.real and different 
    2.real and equal
    3.not real
    */
   //if the roots are real and different
   if( discriminant>0)
   {
   root1=(-b+sqrt(discriminant))/2*a;
   root2=(-b-sqrt(discriminant))/2*a;
   printf("Roots are :%f and %f", root1,root2);
   }
   //roots real and equal
   else if(discriminant==0)
   {
    root1=root2=-b/(2*a);
    printf("Roots are :%f and %f", root1,root2);
   }
   //not real roots
  else
   {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are: = %.2lf+%.2lfi and = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    

    return 0;
}