#include <stdio.h>
int main()
{
    //Arrays are used to store similar type of data; Syntax: datatype array_name[array_size]
int n;
float arr[100],sum=0.0,average;  //average=sum of elements/no. of elements 
printf("Enter no of elements of array:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("Enter elements one  y one:\n");
    scanf("%f",&arr[i]);
    sum+=arr[i];
}
average=sum/n;
printf("Average is:%.2f",average);  //precision upto 2 digits after decimal we use .2 with %f

return 0;
}