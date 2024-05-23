#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr ={10,2,40};
    arr.push_back(10);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" "<<endl;
    }
}