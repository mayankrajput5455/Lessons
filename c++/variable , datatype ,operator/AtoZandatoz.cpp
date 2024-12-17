#include<iostream>
using namespace std;
int main(){
    for(char i='A';i<='Z';i++){
        cout<<i<<" ";// for Capital letter
    }
    cout<<endl;
    for(char i='a';i<='z';i++){
        cout<<i<<" ";// for small letter
    }
    cout<<endl;
    for(int i=1;i<=10;i++){
        cout<<i<<" ";// for number 1 to 10
    }
    cout<<endl;
    for(int i=32;i<=47;i++){
        cout<<char(i)<<" ";
    }
      for(int i=58;i<=64;i++){
        cout<<char(i)<<" ";
    }
      for(int i=91;i<=97;i++){
        cout<<char(i)<<" ";
    }
      for(int i=123;i<=126;i++){
        cout<<char(i)<<" ";
    }

    return 0;
}