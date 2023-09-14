#include<stdio.h>

int main()
{
FILE *fpointer =fopen("employees.txt" , "a"); 
fprintf(fpointer , "\nKelly , women");
 
fclose(fpointer); //we need to close the file in c whenever we open it
return 0;
}