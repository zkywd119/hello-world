#include <stdio.h>
#include <string.h>
int main()
{
  char line[150];
  int i, flag = 0,count=0;

  printf("Enter a line of string: ");
  fgets(line,150,stdin);

  for(i=0; line[i]!='\0'; ++i)
  {
    count++;
  }
  if(count%2==0)
  {
    flag = 1;
  }
  else
  {
    for(i=count/2-1;i>=0;--i)
    {
      if((line[i]=='[' && line[count-2-i]!=']') ||
        (line[i]=='{' && line[count-2-i]!='}' ) ||(line[i]=='[' && line[count-2-i]!=']'))
            flag = 1;
    }
  }
  printf("count number is %d\n",count);
  if(flag)
    printf("Parentheses are not valid.\n");
  else
    printf("Parentheses are valid.\n");
  return 0;
}
