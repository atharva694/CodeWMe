#include <iostream>
using namespace std;

int main(){
    int arr[5]={5,2,55,99,1};
    int size=5;

    for(int i=0; i<size-1; i++){
        int min=i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i], arr[min]);
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}