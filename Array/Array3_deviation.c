#include <stdio.h>
#include <math.h>
float deviation(float* array, int n)
{
  float sum = 0,mean,devian=0;
  for(int i=0;i<n;i++)
  {
    sum = sum+array[i];
  }
  mean = sum/n;
  for(int i=0;i<n;i++)
  {
    devian = devian+pow(array[i]-mean,2);
  }
  return sqrt(devian/n);
}
int main()//lowest common multiple
{
  int i,size;
  float num[100],max;
  printf("Enter the numbers of elements: \n");
  scanf("%d",&size);

  for(i=0;i<size;i++)
  {
    printf("%d. Enter number:", i+1);
    scanf("%f",&num[i]);
  }
  printf("Devian is %.2f.\n", deviation(num,size));

  return 0;
}
