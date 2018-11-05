#include <stdio.h>

/* Function to right Rotate arr[] of size n by 1*/
void rightRotatebyOne(int arr[], int n)
{
    int temp = arr[n-1], i;
    for (i = n-1; i >0; i--)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}
/*Function to right rotate arr[] of size n by d*/
void rightRotate(int arr[], int d, int n)
{
    int i;
    for (i = 0; i < d; i++)
        rightRotatebyOne(arr, n);
}



/* utility function to print an array */
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

/* Driver program to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    rightRotate(arr, 3, 7);
    printArray(arr, 7);
    return 0;
}
