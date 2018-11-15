#include<stdio.h>


int main()
{
    //int arr[] = {1,1,2};
        int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j,m;
    j = i;
    for(i=1;i<size;i++)
    {
        while(j<size && arr[j]==arr[i-1])
        {
            j++;
        }
        if (j==size) break;
        arr[i] = arr[j];
    }
    printf("The first %d elements are:\n", i);
    for(m=0;m<i;m++)
    {
      printf("%d ",*(arr+m));
    }
    printf("\n");
    return 0;
}
