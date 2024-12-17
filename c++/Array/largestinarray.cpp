#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size=5;
    int arr[]={1,3,4,5,9};
    int largest = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    cout<<"largest="<<largest<<endl;


    return 0;
}