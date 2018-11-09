#include <stdio.h>


int main()
{
  int term, t1=0, t2=1,next;
  printf("Enter term: ");
  scanf("%d",&term);
  printf("fibonacci series is: \n");
  for(int i = 1; i<=term;i++)
  {
    printf("%d, ", t1);
    next = t1+t2;
    t1 = t2;
    t2 = next;
  }
  printf("\n");
  return 0;
}
