#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int unique(char* s) {
    bool hash[26][2]={0};
    int n=strlen(s),idx;              // make hashtab
    printf("string length is %d.\n",n);
    for(int i=0;i<n;i++)
    {
        idx = s[i]-'a';
        hash[idx][1] = hash[idx][0];
        hash[idx][0] = 1;
    }
    for(int i=0;i<n;i++)          // search hashtab
        if(!hash[s[i]-'a'][1])
            return i;
    return -1;
}
int main()
{
    char line[150];

    printf("Enter a line of string: ");
    fgets(line,150,stdin);
    printf("The index of the first unique is:%d\n", unique(line));

    return 0;
}
