#include <stdio.h>
int main()
{
int n,arr[100];
printf("Enter no of elements of array:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    printf("Enter elements one by one:\n");
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
    if(arr[0]<arr[i])
    arr[0]=arr[i]; //storing largest element
}
printf("Largest element = %d", arr[0]);

return 0;
}