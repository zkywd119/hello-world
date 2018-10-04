#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c",&ch);
  int Lower = (ch =='a' ||ch =='e' ||ch =='i' ||ch =='o' ||ch =='u' );
  int Upper = (ch =='A' ||ch =='E' ||ch =='I' ||ch =='O' ||ch =='U' );

  if (Lower||Upper)
    printf("%c is a vowel.\n", ch);
  else
    printf("%c is not a vowel.\n", ch);
  return 0;
}
