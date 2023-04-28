#include <stdio.h>

int main()
{
    char color[20];
    char plural_noun[20];
    char celebrityF[20];
    char celebrityL[20];

    //Prompt the user
    printf("Enter a color : ");
    scanf("%s" , &color);
    printf("Enter a plural noun : ");
    scanf("%s" , &plural_noun);
    printf("Enter a celebrity : ");
    scanf("%s%s" , &celebrityF , &celebrityL);

    printf("Roses are %s\n" , color);  
    printf("%s are blue\n" , plural_noun);  
    printf("I love %s %s\n" , celebrityF , celebrityL); //here program may break if we enter full name so create two variables individually

    return 0;       
}