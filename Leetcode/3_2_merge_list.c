#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};

void push (struct Node** head_ref, int new_data)
{
  struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = *head_ref;
  *head_ref = new_node;
}

void reverse(struct Node** head_ref)
{
  struct Node *curr,*prev,*next;
  curr = *head_ref;
  prev = NULL;
  next = NULL;
  while(curr!=NULL)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr=next;
  }
  *head_ref = prev;
}


void print(struct Node* node)
{
  while(node!=NULL)
  {
    printf(" %d ", node->data);
    node = node->next;
  }
  printf("\n");
}

int main()
{
  struct Node* head1 = NULL;
  struct Node* head2 = NULL;
  struct Node* head3 = NULL;
  push(&head1, 4);
  push(&head1, 2);
  push(&head1, 1);
  push(&head2, 4);
  push(&head2, 3);
  push(&head2, 1);
  printf("Created Linked list1 is: \n");
  print(head1);
  printf("Created Linked list2 is: \n");
  print(head2);
  struct Node* temp1 = head1;
  struct Node* temp2 = head2;
  struct Node* temp3 = head3;
  while(temp1!=NULL && temp2!=NULL)
  {
    if(temp1->data>=temp2->data)
      {
        push(&head3,temp2->data);
        temp2 = temp2->next;
      }
    else
      {
        push(&head3,temp1->data);
        temp1 = temp1->next;
      }
  }
  while(temp1!=NULL)
  {
    push(&head3,temp1->data);
    temp1 = temp1->next;
  }
  while(temp2!=NULL)
  {
    push(&head3,temp2->data);
    temp2 = temp2->next;
  }
  printf("Merged Linked list3 is: \n");
  print(head3);
  reverse(&head3);
  printf("Reverse Merged Linked list3 is: \n");
  print(head3);
  return 0;
}
