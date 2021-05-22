// Bit Manipulation
#include <iostream>

using namespace std;

// Checks if the certain bit of the number is set.
bool checkSet(int num, int pos) {
    int mask = 1 << (pos-1);
    return num & mask;
}

// Checks if a number is power of 2
bool powerTwo(int n) {
    return n>0 && (n & (n-1)) == 0;
}

// counts the set bit
int setCount(int num) {
    int count = 0;

    while(num > 0){
        num = num & (num-1);
        ++count;
    }

    return count;
}

// Find an odd times occuring element
// There must be a unique answer
int oddOccuring(int a[], int size){
    int answer = 0;

    for (int i=0; i<size; ++i){
        answer ^= a[i];
    }

    return answer;
}


int main(){
    int n = 10;
    int a[] = {1,2,4,3,1,5,2,5,3};

    cout << "4th bit set? -> " << checkSet(n,4) <<'\n';
    cout << "3th bit set? -> " << checkSet(n,3) <<'\n';
    
    cout << "Power of 2? -> " << powerTwo(n) <<'\n';
    cout << "16 Power of 2? -> " << powerTwo(16) <<'\n';

    cout << "Set bit count -> " << setCount(n) <<'\n';

    cout << "Odd occuring -> " << oddOccuring(a, 9) <<'\n';
    
    return 0;
}