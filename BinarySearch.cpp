#include<iostream>
using namespace std;
int main(){
    int size, search,low,mid,high;
    bool b = false;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search: ";
    cin>>search;
    low=0; high=size-1;
    mid=(low+high)/2;
    while(low<=high){
        if(arr[mid]==search){
            cout<<"Element found: "<<arr[mid]<<endl;
            b=true;
            break;
        }
        else if(arr[mid]<search){
            low = mid+1;
            break;
        }
        else{
            high=mid-1;
        }
    }
    if(!b){
        cout<<"Element not found"<<endl;
    }
    return 0;
}