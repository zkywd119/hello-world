#include <stdio.h>

void reverse()
{
  char c;
  scanf("%c",&c);
  if (c!='\n')
  {
    reverse();
    printf("%c",c);
  }
}

int main()//greatest common divisior
{
  printf("Enter a sentense: ");
  reverse();
  printf("\n");
  return 0;
}
