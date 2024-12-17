#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    while(n!=0){
    cout<<"Enter n=";
    cin>>n;
    if(n==0){
    break;
    }
    sum+=n;
    }
    cout<<"Sum is ="<<sum<<endl; 
    return 0;
}