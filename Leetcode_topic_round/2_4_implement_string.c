#include <stdio.h>
#include <string.h>

// Returns decimal value of roman numaral
int position(char *haystack, char *needle)
{
    int i = 0,j = 0, temp, flag = 0;
    if (strlen(needle) == 0)
        return 0;
    while (i<strlen(haystack) && j<strlen(needle))
    {
        if (haystack[i] != needle[j])
        {
            if (!flag)
                i++;
            else
            {
                j = 0;
                flag = 0;
            }
        }
        else
        {
            i++;
            j++;
            flag = 1;
        }
    }

    if (j == strlen(needle))
        return i-j;
    else
        return -1;
}

// Driver Program
int main()
{
    // Considering inputs given are valid
    char haystack[] ="hello";
    char needle[] = "ll";
    printf("The needle position is  %d\n",position(haystack,needle));
    printf("needle size is %ld.\n", strlen(needle));
    return 0;
}
