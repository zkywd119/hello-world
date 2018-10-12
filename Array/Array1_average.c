#include <stdio.h>

float average(float* array, int n)
{
  float sum = 0;
  for(int i=0;i<n;i++)
  {
    sum = sum+array[i];
  }
  return sum/n;
}
int main()//lowest common multiple
{
  int i;
  float num[100];
  printf("Enter the numbers of elements: \n");
  scanf("%d",&size);

  for(i=0;i<size;i++)
  {
    printf("%d. Enter number:", i+1);
    scanf("%f",&num[i]);
  }
  printf("Average is %.2f.\n", average(num,size));

  return 0;
}
