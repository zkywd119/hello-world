#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
int push(struct Node **head_ref, int data, int size)
{
    struct Node* new_node = new struct Node;
    struct Node* temp = *head_ref;
    new_node->data = data;
    new_node->next = *head_ref;
    if (*head_ref!=NULL)
    {
        while(temp->next!=*head_ref)
            temp = temp->next;
        temp->next = new_node;
    }
    else
        new_node->next = new_node;
    *head_ref = new_node;

    return size+1;
}

void print(struct Node* n, int step, int size)
{
    
    for (int i=0;i<size-step;i++)
        n = n->next;
    struct Node* temp = n;
    do
        {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    while (temp!=n);
}


int main()
{
    struct Node* head=NULL;
    int size=0;
    /*
    size = push(&head,7,size);
    size = push(&head,6,size);
    size = push(&head,5,size);
    size = push(&head,4,size);
    size = push(&head,3,size);
    size = push(&head,2,size);
    size = push(&head,1,size);
    */
    size = push(&head,99,size);
    size = push(&head,3,size);
    size = push(&head,-100,size);
    size = push(&head,-1,size);  
    cout<<"original array is:";
    print(head,0,size);
    cout<<endl;
    cout<<"rotate right by 1 array is:";
    print(head,1,size);
    cout<<endl;
    cout<<"rotate right by 2 array is:";
    print(head,2,size);
    cout<<endl;
    cout<<"rotate right by 3 array is:";
    print(head,3,size);
    cout<<endl;
    return 0;
}