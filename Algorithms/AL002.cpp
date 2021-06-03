// Merge Sort

#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;
    
    // create temporary array
    int la[n1], ra[n2];

    // copy the elements to temp arrays 
    for(int i=0; i<n1; ++i) la[i] = arr[l+i];
    for(int j=0; j<n2; ++j) ra[j] = arr[m+j+1];

    // compare and merge
    int i=0, j=0;
    while(i<n1 && j<n2){
        if(ra[j]<la[i]){
            arr[l] = ra[j];
            ++j;
        } else {
            arr[l] = la[i];
            ++i;
        }
        ++l;
    }

    // put the remaining
    while(i<n1){
        arr[l] = la[i];
        ++i;
        ++l;
    }

    while(j<n2){
        arr[l] = ra[j];
        ++j;
        ++l;
    }
}

void mergeSort(int arr[], int l, int r) {
    // recursively solve right and left half and merge 
    if(r>l){
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr,l,m,r);
    }
}

int main(){
    int arr[10] = {9,4,1,6,7,3,2,4,8,5};
    mergeSort(arr,0,9);

    for (int i=0; i<10; ++i){
        cout << arr[i] << '\n';
    }
    return 0;
}