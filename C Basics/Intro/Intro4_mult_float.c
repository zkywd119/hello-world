#include <stdio.h>

float mult(float a, float b)
{
  float multiply;
  multiply = a*b;
  return multiply;
}

int main()
{
  float data1, data2;
  printf("Enter two floats: ");
  scanf("%f %f", &data1, &data2);
  printf("%.2f * %.2f = %.2f\n",data1, data2,mult(data1,data2));

  return 0;
}
