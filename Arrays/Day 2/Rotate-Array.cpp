#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[10]={4,5,7,8,2,45,6,8,12,485};
    int size=10;
    int n;
    cout<<"Enter how many place to rotate the array"<<endl;
    cin>>n;
    
     n = n % size;
    
    if(n == 0) {
        //no need to do anything
        return 0;
    }

    //step1: copy last n elements into a temp array
    int temp[10000];
    int index = 0;
    for(int i = size-n; i<size; i++) {
        temp[index] = arr[i];
        index++;
    }

    //step2: shift array elemnts by finalShift places

    for(int i=size-1; i>=0; i--) {
        if(i-n >= 0 ) {
            arr[i] = arr[i-n];
        }
    }

    //step3: copy temp elements into original array 
    for(int i=0; i<n; i++) {
        arr[i] = temp[i];
    }

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }







}