#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node* next;
};

struct Queue
{
  struct Node *front, *rear;
};

struct Node* New_node(int new_data)
{
  struct Node* new_node = (struct Node*) malloc (sizeof(struct Node));
  new_node->data = new_data;
  new_node->next = NULL;
  return new_node;
}

struct Queue* create()
{
  struct Queue* queue = (struct Queue*) malloc (sizeof(struct Queue));
  queue->front =queue->rear = NULL;
  return queue;
}

void Enqueue (struct Queue* queue, int new_data)
{
  struct Node* new_node = New_node(new_data);
  if (queue->rear==NULL)
  {
    queue->front =queue->rear = new_node;
    printf("%d is Enqueued to the empty queue.\n",new_node->data);
    return;
  }
  queue->rear->next = new_node;
  queue->rear = new_node;
  printf("%d is Enqueued to queue.\n",new_node->data);
}

struct Node* Dequeue(struct Queue* queue)
{
if (queue->front==NULL)
  {
    printf("cannot dequeue an empty queue\n");
    return NULL;
  }

  struct Node* temp = queue->front;
  queue->front = queue->front->next;

  if  (queue->front==NULL)
  {
    queue->rear=NULL;
    printf("after dequeue it is empty.\n");
  }
  return temp;

}

void print(struct Queue* queue)
{
  if (queue->rear==NULL)
  {
    printf("Queue is empty!\n");
    return;
  }
  struct Node* temp = queue->front;
  while(temp!=NULL)
  {
    printf(" %d ",temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  struct Queue *q = create();
  Enqueue(q, 10);
  Enqueue(q, 20);
  Dequeue(q);
  print(q);
  Dequeue(q);
  print(q);
  Enqueue(q, 30);
  print(q);
  Enqueue(q, 40);
  print(q);
  Enqueue(q, 50);
  print(q);
  struct Node* node = Dequeue(q);
  if (node != NULL)
    printf("Dequeued item is %d \n", node->data);
  print(q);
  return 0;
}
