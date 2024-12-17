#include<iostream>
#include<vector>
using namespace std;
int maxprofit(vector<int>& price){
    int maxprofit=0,bestbuy=price[0];
    for(int i=1;i<price.size();i++){
        if(price[i]>bestbuy){
            maxprofit=max(price[i]-bestbuy,maxprofit);
        }
        bestbuy=min(bestbuy,price[i]);
    }
    return maxprofit;
}
int main(){
    vector<int> price={1,4,7,9,6};
    cout<<maxprofit(price)<<endl;
    return 0;
}