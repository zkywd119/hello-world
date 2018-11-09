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

void delete (struct Node** head_ref, int key)
{
  struct Node* temp = *head_ref;
  struct Node* prev = *head_ref;
  if (temp!=NULL && temp->data == key)
  {
    *head_ref = temp->next;
    free(temp);
    return;
  }
  while (temp!=NULL && temp->data != key)
  {
    prev = temp;
    temp = temp->next;
  }
  if (temp==NULL)
  {
    printf("Node not found.\n");
    return;
  }
  prev->next = temp->next;
  free(temp);
  return;
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
  struct Node* head = NULL;

  push(&head, 9);
  push(&head, 1);
  push(&head, 5);
  push(&head, 4);

  printf("Created Linked list is: \n");
  print(head);

  delete(&head, 5);
  printf("After Removing, Linked list is: \n");
  print(head);
  return 0;
}
