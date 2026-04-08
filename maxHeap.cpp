#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

class MaxHeap{
public:
    int *arr;
    int size;
    int capacity;

    MaxHeap(int c){
        arr = new int[c];
        size = 0;
        capacity = c;
    }

    ~MaxHeap() {
        delete[] arr;
    }

    void insert(int x){
        if(size == capacity){
            cout << "Overflow: Could not insertKey\n";
            return;
        }
        size++;
        int i = size - 1;
        arr[i] = x;

        while(i != 0 && arr[(i - 1) / 2] < arr[i]){
            swap(arr[i], arr[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void MaxHeapify(int i){
        int largest = i;
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        if(l < size && arr[l] > arr[largest]){
            largest = l;
        }
        if(r < size && arr[r] > arr[largest]){
            largest = r;
        }
        if(largest != i){
            swap(arr[i], arr[largest]); 
            MaxHeapify(largest);
        }
    }

    int extractMax(){
        if(size <= 0){
            return INT_MIN;
        }
        if (size == 1) {
            size--;
            return arr[0];
        }
        int max = arr[0];
        arr[0] = arr[size - 1];
        size--;
        MaxHeapify(0);
        return max;
    }
    int getMax(){
        if (size <= 0) {
            return INT_MIN;
        }
        return arr[0];
    }

    void deleteKey(int i){
        if(i >= size){
            cout << "Overflow: Could not deleteKey\n";
            return;
        }
        changeKey(i, INT_MAX);
        extractMax();
    }

    void changeKey(int i, int new_val){
        if(i >= size){
            cout << "Overflow: Could not changeKey\n";
            return;
        }
        int old_val = arr[i];
        arr[i] = new_val;
        if(new_val > old_val){
            while(i != 0 && arr[(i - 1) / 2] < arr[i]){
                swap(arr[i], arr[(i - 1) / 2]);
                i = (i - 1) / 2;
            }
        }
        else{
            MaxHeapify(i);
        }
    }
};

int main(){
    MaxHeap h(11);
    h.insert(3);
    h.insert(2);
    h.deleteKey(1);     
    h.insert(15);
    h.insert(5);
    h.insert(4);
    h.insert(45);
    cout << h.extractMax() << " ";
    cout << h.getMax() << " ";
    h.changeKey(2, 50);
    cout << h.getMax() << " ";
    return 0;
}