#include <stdio.h>
int main()
{
    //declaration and initialization of variables
    int n,count=0;
    printf("Enter an interger:");
    scanf("%d",&n);
    //iterate loop atleast once whether the condition is true or not 
    do
    {
       n=n/10;
       count++;
    } while ((n!=0));
    printf("Number of digits : %d",count);

    return 0;
}
