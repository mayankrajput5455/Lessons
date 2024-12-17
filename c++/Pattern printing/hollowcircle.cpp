#include<iostream>
#include<math.h>
using namespace std;
int dist(int x,int y){
    return sqrt(pow(x,2)+pow(y,2));
}
int main(){
    int r;
    cout<<"Enter r:";
    cin>>r;
    for(int i=-r;i<=r;i++){
        for (int j=-r;j<=r;j++){
            if(dist(i,j)==r){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}