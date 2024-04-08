#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *getnode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node *));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
int main()
{
    struct Node *head = NULL;
    int data = 0;
    cout << "Enter data : ";

    while (data != -1)
    {

        cin >> data;

        if (data == -1)
            break;
    struct Node *newnode = getnode(data);

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    }
    cout << "Linked list is:";
    struct Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}