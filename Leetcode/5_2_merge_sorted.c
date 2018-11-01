#include <stdio.h>

int main()
{
    int A[] = {1,2,3};
    int B[] = {2,5,6};
    int sizeA, sizeB, i=0, j=0,k=0;
    sizeA = sizeof(A)/sizeof(A[0]);
    sizeB = sizeof(B)/sizeof(B[0]);
    int C[sizeA+sizeB];
    while(i<sizeA && j<sizeB)
    {
      if(A[i]>B[j])
        C[k++] = B[j++];
      else
        C[k++] = A[i++];
    }
    while(i<sizeA)
        C[k++] = A[i++];
    while(j<sizeB)
        C[k++] = B[j++];

    printf("The merged array is:\n");
    for(k=0;k<sizeA+sizeB;k++)
    {
      printf("%d ",*(C+k));
    }
    printf("\n");
    return 0;
}
