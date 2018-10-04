#include <stdio.h>

int main()
{
  char ch;
  printf("Enter the character: ");
  scanf("%c",&ch);
  int upper = (ch>='A' && ch<='Z');
  int lower =  (ch>='a' && ch<='z');
  if (upper || lower)
    printf("%c is a character.\n", ch);
  else
    printf("%c is not a character.\n", ch);
  return 0;
}
