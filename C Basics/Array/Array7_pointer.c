#include <stdio.h>

int main()//lowest common multiple
{
  int i, data[5];
  printf("Enter elements: \n");
  for(i=0;i<5;i++)
    scanf("%d",data+i);
  printf("You entered:\n");
  for(i=0;i<5;i++)
  {
    printf("%d\n", *(data+i));
  }
  return 0;
}
