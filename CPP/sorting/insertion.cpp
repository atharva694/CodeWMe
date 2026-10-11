#include <iostream>
using namespace std;

int main(){
    int arr[5]={5,2,66,1,3};
    int size=5;
    int s=sizeof(arr)/4;
    cout<<s<<"\n";

    //code
    for(int i=1; i<size; i++){
        int first=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>first){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=first;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}