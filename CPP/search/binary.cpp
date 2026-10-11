#include <iostream>
using namespace std;

int main(){
    int arr[5]={5,3,2,1,4};
    int size=5;
    int ele, left=0, right=size;

    cout<<"Enter Element 1~5 to Search inside Array: ";
    cin>>ele;

    bool found = false;

    while(left<=right){
        int mid = left + (right-left)/2;

        if(arr[mid]==ele){
            // cout<<"Element found!!!";
            found=true;
            break;
        }else if(arr[mid]<ele){
            left=mid+1;
        }else{
            right=mid-1;
        }
    }

    if(found){
        cout<<"Element Found!!!";
    }else{
    cout<<"Element not found(*_*)!!!";
    }
}