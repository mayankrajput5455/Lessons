#include<iostream>
using namespace std;
int recBinarysearch(int arr[],int target,int start,int end){
    if(start<=end){
        int mid=start+(end-start)/2;
        if(target>arr[mid]){
            return recBinarysearch(arr,target,mid+1,end);
        }else if(target<arr[mid]){
            return recBinarysearch(arr,target,start,mid-1);
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int n=7,arr[n]={-1,0,3,4,5,9,12};
    int start=0,end=n-1;
    int target=3;
    cout<<recBinarysearch(arr,target,start,end)<<endl;
    return 0;
}