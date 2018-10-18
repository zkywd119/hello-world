#include <stdio.h>

int main()//lowest common multiple
{
  char str[1000], ch;
  int i, frequency = 0;
  printf("Enter a string: \n");
  fgets(str,1000,stdin);

  printf("Enter a character to find the frequency: \n");
  scanf("%c",&ch);

  for(i=0;str[i]!='\0';i++)
  {
    if(ch == str[i])
      frequency++;
  }
  printf("Frequency of %c = %d.\n", ch, frequency);

  return 0;
}
