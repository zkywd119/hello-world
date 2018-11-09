#include <stdio.h>
#include <stdlib.h>

int solve(int n)
{
  int count[n+1];
  count[0]  = 1,  count[1] = 1;
  for (int i=2; i<=n; i++) 
      count[i] = count[i-1] + count[i-2];

  return count[n];

}

int main()
{
    int n = 0;
    printf("Total steps to cover: \n");
    scanf("%d",&n);
    printf("the number of methods is %d\n",solve(n));
    return 0;
}
