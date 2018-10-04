#include <stdio.h>

int main()//lowest common multiple
{
  int n1,n2,i=1,multiple=0;
  printf("Enter two integers: ");
  scanf("%d %d",&n1,&n2);
  if (n1<=n2)
    i = n2;
  else
    i = n1;
  for(i;;i++)
  {
    if(i%n1==0 && i%n2==0)
    {
      multiple = i;
      break;
    }
  }
  printf("LCM is %d\n", multiple);
  return 0;
}
