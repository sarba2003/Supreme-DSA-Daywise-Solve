#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the Number For Printing The Table "<<endl;
    cin>>num;

    for(int i =1;i<=10;i++){
        int ans = num *i;
        cout<<num<<" * "<<i<<" = "<<ans<<endl;
    }
}