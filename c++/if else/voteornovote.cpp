#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Your Age: ";
    cin>>age;
    if(age<18){
        cout<<"No, You Can't Vote"<<endl;
    }else{
        cout<<"Yes You Can Vote"<<endl;
    }
    return 0;
}

