#include <stdio.h>
#include <math.h>
int check(int data) //prime
{
  int flag = 0;
  for(int i=2;i<=data/2;i++)
  {
    if (data%i==0)
    {
      flag = 1;
      return flag;
    }
  }
  return flag;
}

int Arm(int data)
{
  int temp1, temp2, flag=0,count=0, result = 0, remain;
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
  {
    flag = 1;
    return flag;
  }
  return flag;
}

int main()//lowest common multiple
{
  int data;
  printf("Enter a >1 integer: \n");
  scanf("%d",&data);

  if (check(data))
    printf("%d is not a prime\n", data);
  else
    printf("%d is a prime\n",data);

  if (Arm(data))
      printf("%d is an arm\n", data);
    else
      printf("%d is not an arm\n",data);
  return 0;
}
