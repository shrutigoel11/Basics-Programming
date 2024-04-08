#include <iostream>
using namespace std;
#define size 5

int stack[size],top=-1; //creation
void push(int);//insertion
int pop();//deletion
int display();//display
int main(){
    int choice,val;
    printf("enter choice");
    scanf("%d",&choice);
    switch(choice){
        case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&val);
		 push(val);
		 break;
        case 2:  
		 pop();
		 break;
         case 3:  
		 display();
		 break;
    }

}
void push(int value){
    if(top==size-1){
        printf("cannot insert");
    }
    else{
        top++;
        stack[top]=value;
    }
}
int pop(){
    if(top=-1){
        printf("empty");
    }
    else{
        int deleted=stack[top];
        top--;
        return deleted;
    }
}
int display(){
    if(top==-1){
        printf("empty stack");
    }
    else{
        for(int i=top;i<-1;i--){
            printf("%d" ,stack[i]);
        }
    }
}