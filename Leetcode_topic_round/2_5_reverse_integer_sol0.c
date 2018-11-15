#include <stdio.h>
#include <math.h>
int* DtoB(int n)
{
    static int arr[5];
    int i = 0;
    while(n != 0)
    {
        arr[i] = (n%10);
        i++;
        n = n/10;
    }
    return arr;
}

int BtoD(int arr[], int n)
{
  int D =0;
  int i=n-1,remain;
  while (i >=0 )
  {
    remain = arr[i];
    D = D+ remain*pow(10,n-1-i);
    i--;
  }
  return D;
}

int main()//greatest common divisior
{
  int n;
  int *arr;
  printf("Enter an intger number: ");
  scanf("%d",&n);
  if(n>0)
  {
      arr = DtoB(n);
      printf("The reversed integer is:%d\n", BtoD(arr,5));
  }
  else
  {
      arr = DtoB(-n);
      printf("The reversed integer is:%d\n", -BtoD(arr,5));
  }

  return 0;
}
