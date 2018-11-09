#include <stdio.h>

void swap(int* a, int* b, int* c)
{
  int temp;
  temp = *b;
  *b = *a;
  *a = *c;
  *c = temp;
}
int main()//lowest common multiple
{
  int a,b,c;
  printf("Enter a,b,and c: \n");
  scanf("%d %d %d", &a, &b, &c);
  printf("Value before swapping: \n");
  printf("a = %d \nb = %d \nc = %d\n",a,b,c);

  swap(&a,&b,&c);
  printf("Value after swapping: \n");
  printf("a = %d \nb = %d \nc = %d\n",a,b,c);

  return 0;
}
