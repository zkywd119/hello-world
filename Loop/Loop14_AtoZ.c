#include <stdio.h>

int main()//lowest common multiple
{
  char ch = 'A'-1;
  printf("The A to Z is: \n");
  for (int i =0;i<26;i++)
  {
    ch = ch+1;
    printf("%c ", ch);
  }
  printf("\n");
  return 0;
}
