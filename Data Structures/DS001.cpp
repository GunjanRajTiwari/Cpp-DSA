// Arrays

// Kadane Algorithm
// Largest Sum Contiguous Subarray

#include <iostream>
#include <climits> // for intmax and intmin

using namespace std;

int kadane(int a[], int size){
    int max_here = 0;
    int max_all = INT_MIN;
    
    for (int i=0; i<size; ++i) {
        max_here += a[i];
        if(max_here < 0){
            max_here = 0;
        }
        if(max_here > max_all){
            max_all = max_here;
        }
    }

    return max_all;
}

int main(){
    int a[] = {1,-2, 4,-4, 4, 2, -1,3,0,-1};

    cout << "Answer: " << kadane(a, 10) <<'\n';

    return 0;
}