#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int size;

    cout<<"Enter the Size of Array: ";
    cin>>size;

    cout<<"Enter the Elements of Array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }


    //calling sorting function
    mergeSort(arr, 0, size-1);
}