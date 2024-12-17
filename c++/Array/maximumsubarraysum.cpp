#include<iostream>
#include<climits>//for INT_MIN
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int maxSum=INT_MIN;
    for(int start=0;start<size;start++){
        int currSum=0;
        for(int end=start;end<size;end++){
            currSum+=arr[end];
            maxSum=max(currSum,maxSum);
        }
    }
    cout<<"Max Subarray Sum="<<maxSum<<endl;
        return 0;
}