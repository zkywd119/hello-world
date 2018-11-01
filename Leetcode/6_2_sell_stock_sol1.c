
#include<stdio.h>

int maxDiff(int arr[], int n)
{
    // Create a diff array of size n-1. The array will hold
    //  the difference of adjacent elements
    int diff[n-1];
    for (int i=0; i < n-1; i++)
        diff[i] = arr[i+1] - arr[i];

    // Now find the maximum sum subarray in diff array
    int max_diff = 0;
    for (int i=1; i<n-1; i++)
    {
        if (diff[i-1] > 0)
            diff[i] += diff[i-1];
        if (max_diff < diff[i])
            max_diff = diff[i];
    }
    return max_diff;
}

/* Driver program to test above function */
int main()
{
//    int arr[] = {7,1,5,3,6,4};
    int arr[] = {7,6,4,3,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum difference is %d.\n",  maxDiff(arr, size));
    return 0;
}
