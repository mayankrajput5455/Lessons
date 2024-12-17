#include<iostream>
using namespace std;
int main(){

    int a = 10;
    int b = a++;//post-increment
    int c = ++a;//pre-increment
    int d = a--;//post-decrement
    int e = --a;//pre-decrement
    cout<< b <<endl;
    cout<< c <<endl;
    cout<< d <<endl;
    cout<< e <<endl;

    return 0;
}