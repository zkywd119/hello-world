#include <stdio.h>
#include <math.h>
int main()//lowest common multiple
{
  int data,high,temp1,temp2,count=0,remain,result=0;
  printf("Enter two integers: \n");
  scanf("%d %d",&data, &high);
  for (int i=data+1; i<high;i++)
  {
  temp1 = temp2 =i;
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
  if (result ==i)
    printf("%d is an Armstong number\n", i);
  count =0;
  result = 0;
}
  return 0;
}
