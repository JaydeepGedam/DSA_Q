#include <bits/stdc++.h>
using namespace std;

int maxSumSubarray(int arr[], int n){
    int maxsum = INT_MIN;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum = currsum + arr[i];
        if(currsum > maxsum){
            maxsum = currsum;
        }
        if(currsum < 0){
            currsum = 0;
        }
    }
    return maxsum;
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the n elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int maxsum = maxSumSubarray(arr,n);

    cout<<maxsum;

    return 0;
    
}