#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    bool isSwap = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            return;
        }
    }
}
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int SI=i;
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[SI]){
                SI=j;
            }
        }
        swap(arr[i],arr[SI]);
    }
}
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}