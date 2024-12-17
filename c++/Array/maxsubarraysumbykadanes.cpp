#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxsubarraysum(vector<int>& nums){
int currSum=0,maxSum=INT_MIN;
for(int val:nums){
    currSum+=val;
    maxSum=max(currSum,maxSum);
    if(currSum<0){
        currSum=0;
    }
}
return maxSum;
}
int main(){
    vector<int> arr={2,-4,6,8,-9,-1};
    int Sum=maxsubarraysum(arr);
    cout<<"Maximum Subarray Sum is:"<<Sum<<endl;
    return 0;
}
