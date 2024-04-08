#include <iostream>
using namespace std;

struct Node{

    int data;
    struct Node* next;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct Node *t;
    struct Node *last;
    first=(struct Node*)malloc(sizeof(struct Node));
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
    }
}
void display(struct Node* p){
    if(p!=NULL){
        cout<<p->data<<" ";
        display(p->next);
}
}
void Rdisplay(struct Node* p){
    if(p!=NULL){
        Rdisplay(p->next);
        cout<<p->data<<" ";
}
}


int main()
{
int A[]={8,3,7,12,9};
create(A,5);
cout<<"Front Display: ";
display(first);
cout<<"\nReverse Display: ";
Rdisplay(first);
return 0;
}                