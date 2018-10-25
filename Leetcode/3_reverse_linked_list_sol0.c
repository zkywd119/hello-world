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
void swap(struct Node* node1,struct Node* node2)
{
  int temp;
  temp = node1->data;
  node1->data = node2->data;
  node2->data = temp;
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
  for(i = 0; i<count/2;i++)
  {
    temp1 = head;
    temp2 = head;
    k = i;
    j = count-i-1;
    while(k>0)
    {
      temp1 = temp1->next;
      --k;
    }
    while(j>0)
    {
      temp2 = temp2->next;
      --j;
    }
    swap(temp1,temp2);
  }
  printf("i = %d, j = %d, k = %d, count = %d\n", i,j,k,count);
  printf("After reverse Linked list is: \n");
  print(head);
  return 0;
}
