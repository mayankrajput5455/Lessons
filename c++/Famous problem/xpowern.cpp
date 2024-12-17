#include<iostream>
using namespace std;
int power(int x,int n){
    long binform=n;
    double ans=1;
    if(binform<0){
        x=1/x;
        binform=-binform;
    }
    while(binform>0){
        if(binform %2 ==1){
            ans*=x;
        }
        x*=x;
        binform/=2;
    }
    return ans;
}
    int main(){
        int x,n;
        cout<<"Enter X:";
        cin>>x;
        cout<<"Enter n:";
        cin>>n;
        cout<<power(x,n)<<endl;
    return 0;
}