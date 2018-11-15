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

void delete (struct Node** head_ref, int n)
{
  struct Node* temp1 = *head_ref;
  struct Node* temp2 = *head_ref;
  for (int i = 0; i < n+1; i++)
  {
      temp2 = temp2->next;
  }

  while (temp2!=NULL)
  {
      temp2 = temp2->next;
      temp1 = temp1->next;
  }
  temp1->next = temp1->next->next;

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

  push(&head, 5);
  push(&head, 4);
  push(&head, 3);
  push(&head, 2);
  push(&head, 1);
  printf("Created Linked list is: \n");
  print(head);

  delete(&head, 2);
  printf("After Removing, Linked list is: \n");
  print(head);
  return 0;
}
