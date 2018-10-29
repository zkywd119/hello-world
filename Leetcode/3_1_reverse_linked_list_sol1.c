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

void print(struct Node* node)
{
  while(node!=NULL)
  {
    printf(" %d ", node->data);
    node = node->next;
  }
  printf("\n");
}
/* Function to reverse the linked list */
void reverse(struct Node** head_ref)
{
    struct Node* prev   = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;
    while (current != NULL)
    {
        // Store next
        next  = current->next;

        // Reverse current node's pointer
        current->next = prev;

        // Move pointers one position ahead.
        prev = current;
        current = next;
    }
    *head_ref = prev;
}
int main()
{
  int i,j,k,count=0;
  struct Node* head = NULL;
  struct Node *temp1, *temp2;
  push(&head, 5);
  count++;
  push(&head, 4);
  count++;
  push(&head, 3);
  count++;
  push(&head, 2);
  count++;
  push(&head, 1);
  count++;

  printf("Created Linked list is: \n");
  print(head);
  reverse(&head);
  printf("After reverse Linked list is: \n");
  print(head);
  return 0;
}
