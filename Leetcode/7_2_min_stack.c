#include <stdio.h>
#include <stdlib.h>
typedef struct
{
  int count, mincount;
  int* arr, * mins;
}MinStack;

void create(MinStack* stack, int maxsize)
{
  stack->arr = (int*) malloc (sizeof(int)*maxsize);
  stack->mins = (int*) malloc (sizeof(int)*maxsize);
  stack->count = 0;
  stack->mincount = 0;
}

void push (MinStack* stack, int data)
{
  stack->arr[stack->count++] = data;
  if(stack->mincount==0 || data <= stack->mins[stack->mincount-1])
    stack->mins[stack->mincount++] = data;
}

void pop(MinStack* stack)
{
  int pop = stack->arr[stack->count-1];
  if(stack->mins[stack->mincount-1] == pop)
    stack->mincount--;
  stack->count--;
}
int top(MinStack* stack)
{
  printf("the top of the stack is %d.\n",stack->arr[stack->count-1]);
  return stack->arr[stack->count-1];
}
int getmin(MinStack* stack)
{
  printf("the minimum in the stack is %d.\n",stack->mins[stack->mincount-1]);
  return stack->mins[stack->mincount-1];

}
int main()
{
  MinStack* stack = (MinStack*) malloc(sizeof(MinStack));
  create(stack,10);
  int poped;
  push(stack, -2);
  push(stack, 0);
  push(stack, -3);
  getmin(stack);
  pop(stack);
  top(stack);
  getmin(stack);

  return 0;
}
