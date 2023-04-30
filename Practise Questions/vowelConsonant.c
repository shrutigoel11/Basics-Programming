#include <stdio.h>
int main() {
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if(c=='a'|| c=='A')
    {
        printf("It is a vowel");
    }
    else if(c=='e'|| c=='E')
    {
        printf("It is a vowel");
    }
    else if(c=='i'|| c=='I')
    {
        printf("It is a vowel");
    } 
    else if(c=='o'|| c=='O')
    {
        printf("It is a vowel");
    }
    else if(c=='u'|| c=='U')
    {
        printf("It is a vowel");
    }
    else
    {
        printf("It is a consonant");
    }
    return 0;
}