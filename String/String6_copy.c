#include <stdio.h>

int main()
{
    char s1[150], s2[150];
    int i;
    printf("Enter first line of string: ");
    scanf("%s",s1);


    for(i = 0; s1[i] != '\0'; i++)
    {
      s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s.\n",s2);

    return 0;
}
