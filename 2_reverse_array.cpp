#include<iostream>
using namespace std;

void reversearray(int arr[],int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }  
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<< n <<" elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Original array : ";
    printArray(arr,n);

    reversearray(arr,n);

    cout<<"\nOriginal array : ";
    printArray(arr,n);
    
}