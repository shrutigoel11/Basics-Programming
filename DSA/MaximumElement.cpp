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
int max(struct Node* p){
    int m=-32768;
    while(p!=NULL){
        if(p->data>m){
        m=p->data;
        p=p->next;}
    }
    return m;
}
int recursivemax(struct Node* p){
    int x=0;
    if(p==0){
        return INT32_MIN;
    }
    else
    {
        x=recursivemax(p->next);
        return (x>p->data)?x:p->data;

    }
}

int main()
{
int A[]={8,3,7,12,9};
create(A,5);
cout<<max(first)<<"\n";
cout<<"Recursively MAX is: "<<recursivemax(first);
return 0;
}