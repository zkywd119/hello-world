#include <stdio.h>

float largest(float* array, int n)
{
  float max = array[0];
  for(int i=0;i<n;i++)
  {
    if (array[i]>max)
      max = array[i];
  }
  return max;
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
  printf("Maximum is %.2f.\n", largest(num,size));

  return 0;
}
