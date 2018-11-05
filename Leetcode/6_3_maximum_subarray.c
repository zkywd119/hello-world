#include<stdio.h>

int maxsub(int arr[], int n)
{
    int max_so_far=0,max_ending_here=0;
    for (int i=0; i < n; i++)
    {
      max_ending_here=max_ending_here+arr[i];
      if(max_ending_here<0)
        max_ending_here = 0;
      if(max_ending_here>max_so_far)
        max_so_far = max_ending_here;
    }
    return max_so_far;
}

int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Maximum sum of subarray is %d.\n",  maxsub(arr, size));
    return 0;
}
