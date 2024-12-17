#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    int sum=0;
    int pdt=1;
    for(int i=1;i<=size;i++){
        sum+=i;
        pdt*=i;
    }
    cout<<"sum="<<sum<<endl;
    cout<<"product="<<pdt<<endl;
    return 0;
}