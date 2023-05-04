#include<stdio.h>

int main()
{
    char line[255];
FILE *fpointer =fopen("employees.txt" , "r"); 
fgets(line,255,fpointer);
printf("%s" ,line); 
fclose(fpointer); //we need to close the file in c whenever we open it
return 0;
}