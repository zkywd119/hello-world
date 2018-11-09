#include <stdio.h>

int max(int a, int b)
{
    if(a>b) return a;
    else return b;
}
int maxLoot(int *hval, int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return hval[0];
    if (n == 2)
        return max(hval[0], hval[1]);

    // dp[i] represent the maximum value stolen
    // so far after reaching house i.
    int dp[n];

    // Initialize the dp[0] and dp[1]
    dp[0] = hval[0];
    dp[1] = max(hval[0], hval[1]);

    // Fill remaining positions
    for (int i = 2; i<n; i++)
        dp[i] = max(hval[i]+dp[i-2], dp[i-1]);

    return dp[n-1];
}

// Driver to test above code
int main()
{
    int hval[] = {2,7,9,3,1};
    int n = sizeof(hval)/sizeof(hval[0]);
    printf("Maximum loot possible is %d.\n",maxLoot(hval,n));
    return 0;
}
