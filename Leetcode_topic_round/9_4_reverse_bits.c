#include <stdio.h>
#include <math.h>

int* DtoB(unsigned long n)
{
    static int arr[32];
    int i = 0;
    while(n != 0)
    {
        arr[i] = (n%2);
        i++;
        n = n/2;
    }
    return arr;
}

unsigned long BtoD(int arr[], int n)
{
  unsigned long D =0;
  int i=n-1,remain;
  while (i >=0 )
  {
    remain = arr[i];
    D = D+ remain*pow(2,n-1-i);
    i--;
  }
  return D;
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()//greatest common divisior
{
  unsigned long n=43261596;
  int *arr;
//  printf("Enter a decimal number: ");
//  scanf("%lu",&n);
  arr = DtoB(n);
  printArray(arr,32);
  printf("The new decimal number is:%lu\n", BtoD(arr,32));
  return 0;
}
