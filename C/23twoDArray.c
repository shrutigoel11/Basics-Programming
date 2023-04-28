#include <stdio.h>

int main()

{
// int nums[3][2] = { {0,2} , {2,3} ,{ 3,4}}; //2D array with 3 elements conataining two elements each
// //Accessing elements of array by reffering to their index
// printf("First element is :%d\n\n" , nums[0][0]);

// //nested loops--->loops inside a loop

// int i,j;
// printf("All the elements are: \n");
// for(i=0 ; i<3 ; i++)
// {
//     for(j=0 ; j<2 ; j++)
//     {
//         printf("%d " , nums[i][j]);
//     }
//     printf("\n");
// }

int input[3][3];
//taking input from user
int i,j;
printf("Enter the elements: ");
for(i=0 ; i<3 ; i++)
{
    for(j=0 ; j<3 ; j++)
    {
    scanf("%d" , &input[i][j]);
    }
}
printf("The matrix is : \n");
for(i=0 ; i<3 ; i++)
{
    for(j=0 ; j<3 ; j++)
    {
    printf("%d " , input[i][j]);
    }
    printf("\n");
}
    return 0; 
}
