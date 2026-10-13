#include <iostream>
using namespace std;

int partition(int arr[], int low, int high){
    int i=low-1;
    // int j=low;

    int pivot=arr[high];

    for(int k=low; k<=high-1; k++){
        if(arr[k]<=pivot){
           i++; 
           swap(arr[k], arr[i]);
            
        }
    }
    //always write here arr[high], if written pivot then it won't work
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }

    int pivotIndex = partition(arr, low, high);

    quickSort(arr, low, pivotIndex - 1);
    quickSort(arr, pivotIndex + 1, high);
}

int main(){
    int arr[5]={5,2,3,1,4};
    int size=5;
    int high=size-1, low=0;

    quickSort(arr, low, high);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}