#include <iostream>
#include <vector>
using namespace std;
vector <int> arr;
int main (){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    arr.resize(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    arr.erase(arr.begin() + 2);
    n--;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return  0;
}  
