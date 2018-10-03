#include <stdio.h>

void swap(int* a, int* b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main()
{
  int data1, data2;
  data1 = 3;
  data2 = 5;
  printf("Before swap data1 is %d, data2 is %d.\n",data1,data2);
  swap(&data1, &data2); //the contents inside the addresses are swapped
  printf("After swap data1 is %d, data2 is %d.\n",data1,data2);

  return 0;
}
