#include <stdio.h>

int main()
{
    char s1[150], s2[150];
    int i, j;
    printf("Enter first line of string: ");
    scanf("%s",s1);

    printf("Enter second line of string: ");
    scanf("%s",s2);

    for(i = 0; s1[i] != '\0'; i++)
    {
    }
    for(j = 0; s2[j] != '\0'; i++,j++)
    {
      s1[i] = s2[j];
    }
    s1[i] = '\0';
    printf("After cascade: %s.\n",s1);
    printf("i value is %d",i);

    return 0;
}
