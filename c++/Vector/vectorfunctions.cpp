#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int>vec={1,2,3,4,5};
vec.push_back(6);
vec.pop_back();
for(int val:vec){
cout<<val<<endl;
}
cout<<"size="<<vec.size()<<endl;
cout<<vec.front()<<endl;
cout<<vec.back()<<endl;
cout<<vec.at(2)<<endl;
    return 0;
}