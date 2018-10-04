#include <stdio.h>
#include <math.h>
int main()//lowest common multiple
{
  int data,temp1,temp2,count=0,remain,result=0;
  printf("Enter an integer: \n");
  scanf("%d",&data);
  temp1 = temp2 =data;
  while (temp1!=0)
  {
    temp1=temp1/10;
    count++;
  }
  while (temp2!=0)
  {
    remain=temp2%10;
    result = result+pow(remain,count);
    temp2 = temp2/10;
  }
  if (result ==data)
    printf("%d is an Armstong number\n", data);
  else
  printf("%d is not an Armstong number\n", data);
  return 0;
}
