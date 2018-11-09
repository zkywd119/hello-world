#include <stdio.h>

float max(float data1, float data2, float data3)
{
  float maximum = data1;
  if (data2>maximum)
    maximum = data2;
  if (data3>maximum)
    maximum = data3;

  return maximum;
}
int main()
{
  float data1, data2, data3;
  printf("Enter three numbers: ");
  scanf("%f %f %f",&data1, &data2, &data3);
  printf("%.2f is the max number.\n", max(data1,data2,data3));
  return 0;
}
