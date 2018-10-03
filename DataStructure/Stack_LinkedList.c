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

int pop(struct Node** head_ref)
{
  if (*head_ref==NULL)
  {
    printf("stack is empty!\n");
    return -10000;
  }
  struct Node* temp = *head_ref;
  *head_ref = temp->next;
  return temp->data;
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
  int poped;
  pop(&head);
  push(&head, 6);
  push(&head, 7);
  push(&head, 1);
  push(&head, 4);

  printf("Created stack is: \n");
  print(head);

  poped = pop(&head);
  printf("After pop, stack is: \n");
  print(head);
  printf("poped value is: %d \n",poped);
  return 0;
}
