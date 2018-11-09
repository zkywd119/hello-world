#include<stdio.h>


int main()
{
    int arr[] = {-1,-100,3,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[size];
    int k=2,i;
    for(i=0;i<size;i++)
    {
      arr2[(i+k)%size] = arr[i];
    }
    printf("The ratated array is:\n");
    for(i=0;i<size;i++)
    {
      printf("%d ",*(arr2+i));
    }
    printf("\n");
    return 0;
}
