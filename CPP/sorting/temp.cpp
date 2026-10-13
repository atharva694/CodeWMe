#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int i=low-1;
    int pivot=arr[high];

    for(int j=low; j<high; j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);

    return i+1;
}

void quicksort(int arr[], int low, int high){
    if(low>=high){
        return;
    }

    int pivotindex = partition(arr, low, high);

    quicksort(arr, low, pivotindex-1);
    quicksort(arr, pivotindex+1, high);
}

int main(){
    int arr[5]={5,2,3,4,1};
    int size=5;
    int low=0, high=size-1;

    quicksort(arr, low, high);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}