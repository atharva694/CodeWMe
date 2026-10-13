#include <iostream>
using namespace std;

int main(){
    int arr[5]={52,234,44,33,14};
    int size;
    size=sizeof(arr)/sizeof(arr[0]);
    // int left=0, right=size-1;

    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}