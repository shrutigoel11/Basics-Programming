#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *getnode(int data)
{
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node *));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
int main()
{   
    struct Node *head = NULL;
    int data = 0;

    cout << "Enter data : ";

    while(data != -1){

        cin >> data;

        if(data == -1)
            break;

        struct Node *newnode = getnode(data);

        // Check whether linked list is empty or not;
        if (head == NULL)
        {
            head = newnode;
        }
        // Insertion at the beginning of the linked list;
        else
        {
        // head is storing address of first node so assigning it to newnode's next part.
            newnode->next = head;
            head = newnode;
        }
    }

    cout << "Linked List : ";
    struct Node* itr = head;

    while(itr != NULL){

        cout << itr->data << " ";
        itr = itr->next;
    }


    return 0;
}
