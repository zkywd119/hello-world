#include <iostream>
using namespace std;

int single(int * arr, int n)
{
    int result = 0;
    for (int i = 0; i<n; i++)
    {
        result ^=arr[i]; //using the XOR idea
    }
    return result;
}

int main()
{
    //int arr[] = {2,2,1};
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"the single number is:"<<single(arr,n)<<endl;
    return 0;
}