#include <iostream>
using namespace std;
int main(){
    int size,pos,element;
    cout<<"Enter size of an array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter total elements to be inserted: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter position to insert";
    cin>>pos;
    cout<<"Enter element to insert: ";
    cin>>element;
    for(int i=n; i>pos; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=element;
    //Array Deletion
    cout<<"Position to delete: ";
    cin>>pos;
    for(int i = pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}