#include <stdio.h>


int main()//lowest common multiple
{
  int count=0;
  int origin,data,reverse=0,remain;
  printf("Enter an integer: \n");
  scanf("%d",&origin);
  data = origin;
  while (data!=0)
  {
    remain=data%10;
    reverse = reverse*10+remain;
    data = data/10;
  }
  printf("orgin is %d\n",origin);
  printf("reverse is %d\n",reverse);
  if (origin==reverse)
    printf("this is a palindrom\n");
  else
    printf("this is not a palindrom\n");
  return 0;
}
