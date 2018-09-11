#include <iostream>
using namespace std;
#define Max 10000

int main()
{
    //int arr[] = {2,2,1};
    int arr[] = {4,1,2,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i;
    bool s[Max] = {0};
    for (i=0; i<n; i++)
    {
        s[arr[i]] = !(s[arr[i]]);
    }
    for (i=0; i<n; i++)
    {
        if (s[arr[i]]==1)
        {
            break;
        }
    }
    cout<<"the single number is:"<<arr[i]<<endl;
    return 0;
}