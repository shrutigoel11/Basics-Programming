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
    while(p!=NULL){
        printf("%d->",p->data);
        p=p->next;
    }
    printf("Null");
}

int main()
{
int A[]={8,3,7,12,9};
create(A,5);
display(first);
return 0;
}