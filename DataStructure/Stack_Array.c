#include <stdio.h>
#include <stdlib.h>
struct Stack
{
  int top, capacity;
  int* array;
};

struct Stack* create(int capacity)
{
  struct Stack* stack = (struct Stack*) malloc (sizeof(struct Stack));
  stack->capacity = capacity;
  stack->top = -1;
  stack->array = (int*) malloc (stack->capacity*sizeof(int));
  return stack;
}

int isFUll(struct Stack* stack)
{
  return (stack->top==stack->capacity-1);
}

int isEmpty(struct Stack* stack)
{
  return(stack->top==-1);
}
void push (struct Stack* stack, int new_data)
{
  if (isFUll(stack))
  {
    printf("Failed to push since the stack is full\n");
    return;
  }
  stack->top = stack->top+1;
  stack->array[stack->top] = new_data;
  printf("%d is pushed into stack\n", stack->array[stack->top]);
}

int pop(struct Stack* stack)
{
  if (isEmpty(stack))
  {
    printf("cannot pop from empty stack!\n");
    return -10000;
  }

  int popped = stack->array[stack->top];
  stack->top = (stack->top)-1;
  return popped;
}


void print(struct Stack* stack)
{
  if (isEmpty(stack))
    return;
  int i = stack->top;
  while(i>=0)
  {
    printf(" %d ", stack->array[i]);
    i--;
  }
  printf("\n");
}

int main()
{
  struct Stack* stack = create(4);
  int poped;
  pop(stack);
  push((stack), 6);
  push(stack, 7);
  push(stack, 1);
  push(stack, 4);
  push(stack,5);

  printf("Created stack is: \n");
  print(stack);

  poped = pop(stack);
  printf("After pop, stack is: \n");
  print(stack);
  printf("poped value is: %d \n",poped);

  return 0;
}
