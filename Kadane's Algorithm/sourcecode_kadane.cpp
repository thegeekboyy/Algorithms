#include<iostream>
using namespace std;
int kadane_Algo(int arr[], int size)
{
    int curr=0, max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        curr+=arr[i];

        if(curr>max)
            max = curr;
        if(curr<0)
            curr=0;

    }
    return max;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int res = kadane_Algo(arr,n);
    cout<<"Maximum Sum Subarray is: "<<res<<endl;
    return 0;
}