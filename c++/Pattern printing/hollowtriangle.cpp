#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
            }
            cout<<"*";
        if(i!=0){
        for( int j=0;j<(2*i)-1;j++){
                if(i!=n-1){
                cout<<" ";
                }else{
                cout<<"*";
                }
        }   
            cout<<"*";
        }
        cout<<endl;
        }
    return 0;
}