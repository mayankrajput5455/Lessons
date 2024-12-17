#include<iostream>
#include<vector>
using namespace std;
vector<int> ProductExceptItself(vector<int>& nums,int n){
   
    vector<int> prefix(n,1);
    vector<int> suffix(n,1);
    vector<int> ans(n,1);
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    for(int i=n-2;i>=0;i--){
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    for(int i=0;i<n;i++){
        ans[i]=prefix[i]*suffix[i];
    }
    return ans;
}
int main(){
    vector<int> nums={1,2,3,4};
    int n=nums.size();
    vector<int> answer=ProductExceptItself(nums,n);
    for(int i=0;i<n;i++){
    cout<<answer[i]<<" ";
    }
    return 0;
}