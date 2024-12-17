#include<iostream>
using namespace std;
int main(){
    int marks;// in Percentage
    cout<<"Enter Your Marks in percent: ";
    cin>>marks;
    if(marks>=90){
        cout<<"Division-Ist"<<endl;
    }else if(marks>=80 && marks<90){
        cout<<"Division-IInd"<<endl;
    }else if(marks>=70 && marks<80){
        cout<<"Division-IIIrd"<<endl;
    }else{
        cout<<"Fail"<<endl;
    }

    return 0;
}