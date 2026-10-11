#include <iostream>
using namespace std;

void lsearch(int arr[], int size, int scope, int &found, int &pos){
    for(int i=0; i<size; i++){
        if(arr[i]==scope){
            found=arr[i];
            pos=i+1;
            return;
        }
    }
    found = -1;
    pos = -1;
    // return found, pos;
}

int main(){
    int arr[5]={5,2,3,1,4};
    int size=5;
    int scope,found=0, pos=0;

    cout<<"Enter Element 1~5 to Search in Array:";
    cin>>scope;

    lsearch(arr, size, scope, found, pos);

    // cout<<"Element found :"<<found<<" At position : "<<pos;
    if(found != -1) {
        cout << "Element found: " << found << " At position: " << pos << endl;
    } else {
        cout << "Element not found in the array!" << endl;
    }
    
}