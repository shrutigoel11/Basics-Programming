#include <stdio.h>

int main()
{
    int age;  //Creating variable to store the value enetered by user
    printf ("Enter your age : ");
    scanf ( "%d" , &age);  //Taking input using function
    printf( "You are %d years old\n" , age);  //Printing value entered by user 

    double cgpa;
    printf ( "Enter your cgpa : ");
    scanf ( "%lf" , &cgpa);
    printf ( "Your cgpa is %lf\n" , cgpa); 

    char grade;
    printf ( "Enter your grade : ");
    scanf("\n%c" , &grade);               //Provide a space as new line is entered as character value to be stored so it will excute new line
    printf("Your grade is %c\n" , grade); 

    char name[20];
    printf("Enter your name :");
    scanf("%s" , name);
    printf("Your name is %s\n"); 

    //Second method to garb whole line of text

   /* char fullName[20];
    printf("Enter your name");
    fgets(fullName,20,stdin);
    printf(" Your name is %s", fullName);*/

    

    return 0;
}