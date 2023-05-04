#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[10];
    int age;
    double gpa;
};

int main()
{
struct student student1;
student1.age= 19;
student1.gpa=9.8;
strcpy(student1.name , "Shruti");
printf("%d %lf %s" ,student1.age , student1.gpa , student1.name);
return 0;
}