// Heap implementation

#include <iostream>
#include <climits>

using namespace std;

// Helper swapping function
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

class MinHeap {
    int heapSize;
    int capacity;
    int* heap;

    public:
    MinHeap(int cap){
        heapSize = 0;
        capacity = cap;
        heap = new int[cap];
    }

    int parent(int i){
        return (i-1)/2;
    }

    int left(int i) {
        return (2*i+1);
    }

    int right(int i) {
        return (2*i+2);
    }

    void heapify(int i) {
        int l = left(i);
        int r = right(i);
        int smallest = i;

        if(l < heapSize && heap[l] < heap[i])
            smallest = l; 
        
        if(r < heapSize && heap[r] < heap[smallest])
            smallest = r;

        // swap with the smallest until both child are smaller
        if(smallest != i){
            swap(&heap[i], &heap[smallest]);
            heapify(smallest);
        } 
    }

    int extractMin(){
        if(heapSize <= 0) {
            return INT_MAX;
        }

        if (heapSize == 1){
            --heapSize;
            return heap[0];
        }

        // replace root with last element and heapify
        int root = heap[0];
        heap[0] = heap[heapSize-1];
        --heapSize;
        heapify(0);

        return root;
    }

    int getMin() {
        return heap[0];
    };

    void decreaseKey(int i, int val){
        heap[i] = val;
        while(i!=0 && heap[parent(i)] > heap[i]) {
            swap(&heap[parent(i)], &heap[i]);
            i = parent(i);
        }
    }

    void insertKey(int k){
        if(heapSize == capacity){
            cout << "Overflow! Cannot insert!\n";
            return;
        }

        // insert at last position
        int i = heapSize;
        heap[i] = k;
        ++heapSize;
        
        // move the new one up to satisfy min heap
        while(i != 0 && heap[parent(i)] > heap[i]){
            swap(&heap[parent(i)], &heap[i]);
            i = parent(i);
        }
    }

    void deleteKey(int k){
        decreaseKey(k, INT_MIN);
        extractMin();
    }
};


int main(){
    MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.deleteKey(1);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);
    cout << h.extractMin() << " ";
    cout << h.getMin() << " ";
    h.decreaseKey(2, 1);
    cout << h.getMin();
    return 0;
}