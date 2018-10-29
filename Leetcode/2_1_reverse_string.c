#include <stdio.h>

void swap(char* a, char* b)
{
  char temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
    char line[150];
    int i, num,count=0;

    printf("Enter a line of string: ");
    fgets(line,150,stdin);

    for(i=0; line[i]!='\0'; ++i)
    {
      count++;
    }
    for(i=0;i<count/2-1;++i)
    {
      swap(&(line[i]),&(line[count-i-1]));
    }

    printf("The reversed string is:%s\n", line);

    return 0;
}
