#include <stdio.h>

void swap(int* a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
int main()//lowest common multiple
{
  int i,j,k=0;
//  int nums1[] = {1,2,2,1}, nums2[] = {2,2};
  int nums1[] = {4,9,5,6,7}, nums2[] = {9,4,6};
  int size1 = sizeof(nums1)/sizeof(nums1[0]);
  int size2 = sizeof(nums2)/sizeof(nums2[0]);
  int nums3[size2];
  for(j=0;j<size2;j++)
  {
      for(i = 0;i<size1-k;i++)
      {
          if(nums2[j] == nums1[i])
          {
             nums3[k] = nums2[j];
             swap(nums1+i,nums1+size1-k-1);
             k++;
             break;
          }
      }
  }
  printArray(nums3,k);
  printf("\n");
  return 0;
}
