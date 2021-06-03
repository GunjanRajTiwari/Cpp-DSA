// Priority Queue with array

#include <iostream>

using namespace std;

class PriorityQueue {
    int capacity;
    int count;
    int* arr;

    public:
    PriorityQueue(int n){
        capacity = n;
        count = 0;
        arr = new int[n];
    }

    bool isEmpty(){
        return (count==0);
    }

    void insert(int p){

        if(count == capacity){
            cout << "Queue is full. \n";
            return;
        }

        if(isEmpty()){
            arr[count++] = p;
        } else {
            int i=0;
            for(i = count-1; i>=0; --i){
                if(arr[i] > p){
                    arr[i+1] = arr[i];
                } else {
                    break;
                }
            }

            arr[i+1] = p;
            ++count;
        }
    }

    void removeMax(){
        if (count == 0){
            cout << "Queue is empty! \n";
            return;
        }

        --count;
    }

    int getMax(){
        if (count == 0){
            cout << "Queue is empty! \n";
            return -1;
        }

        return  arr[count-1];
    }
};

int main() {
    PriorityQueue pq(10);
    
    pq.insert(4);
    pq.insert(3);
    pq.insert(5);
    pq.insert(2);

    cout << "Max: " << pq.getMax() <<'\n';

    cout << pq.isEmpty();
    pq.removeMax();
    return 0;
}