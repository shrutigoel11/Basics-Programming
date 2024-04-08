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
int count(struct Node* p){
int c=0;
while ((p!=NULL))
{
    c++;
    p=p->next;
}
return c;
}

int recursivecount(struct Node*p){
if(p==0)
return 0;
else
return recursivecount(p->next)+1;
}

int Add(struct Node*p){
    int sum=0;
    while ((p))
    {
        sum+=p->data;
        p=p->next;
    }
    return sum;
}
int recursiveadd(struct Node*p){
if(p==0)
return 0;
else
return recursiveadd(p->next)+p->data;
}

int main()
{
int A[]={8,3,7,12,9};
create(A,5);
cout<<"No. of nodes: "<<count(first)<<"\n";
cout<<"No. of nodes recursively: "<<recursivecount(first)<<"\n";
cout<<"Sum is: "<<Add(first)<<"\n";
cout<<"Sum recursively is: "<<recursiveadd(first);
return 0;
}