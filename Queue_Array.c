#include <stdio.h>
#include <stdlib.h>
struct Queue
{
  int front, rear, size, capacity;
  int* array;
};

struct Queue* create(int capacity)
{
  struct Queue* queue = (struct Queue*) malloc (sizeof(struct Queue));
  queue->capacity = capacity;
  queue->front = 0;
  queue->rear = capacity-1;
  queue->array = (int*) malloc (queue->capacity*sizeof(int));
  return queue;
}

int isFUll(struct Queue* queue)
{
  return (queue->size==queue->capacity);
}

int isEmpty(struct Queue* queue)
{
  return(queue->size==0);
}
void Enqueue (struct Queue* queue, int new_data)
{
  if (isFUll(queue))
  {
    printf("Failed to Enqueue since the queue is full\n");
    return;
  }
  queue->rear = (queue->rear+1)%(queue->capacity);
  queue->array[queue->rear] = new_data;
  queue->size = queue->size+1;
  printf("%d is Enqueued into queue\n", queue->array[queue->rear]);
}

int Dequeue(struct Queue* queue)
{
  if (isEmpty(queue))
  {
    printf("cannot dequeue from empty queue!\n");
    return -10000;
  }

  int popped = queue->array[queue->front];
  queue->front = (queue->front+1)%(queue->capacity);
  queue->size = queue->size-1;
  return popped;
}


int front(struct Queue* queue)
{
    if (isEmpty(queue))
        return -10000;
    return queue->array[queue->front];
}

int rear(struct Queue* queue)
{
    if (isEmpty(queue))
        return -10000;
    return queue->array[queue->rear];
}

int main()
{
  struct Queue* queue = create(1000);

  Enqueue(queue, 10);
  Enqueue(queue, 20);
  Enqueue(queue, 30);
  Enqueue(queue, 40);

  printf("%d dequeued from queue\n", Dequeue(queue)); 

  printf("Front item is %d\n", front(queue));
  printf("Rear item is %d\n", rear(queue));

  return 0;
}
