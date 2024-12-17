#include<iostream>
using namespace std;
int main(){
    int num=371,r,d,sum=0;
    int p=num;
    while(num!=0){
        r=num%10;
        d=r*r*r;
        sum+=d;
        num/=10;
    }
    if(sum==p){
        cout<<"No. is armstrong"<<endl;
    }else{
        cout<<"No. is not armstrong"<<endl;
    }
    return 0;
}