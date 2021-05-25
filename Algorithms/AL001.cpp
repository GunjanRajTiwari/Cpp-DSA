// Tower of Hanoi
#include<iostream>
using namespace std;

void toh(int n, int src, int dest, int mid){
    if(n == 0){
        return;
    }

    // First transfering n-1 blocks to mid using dest
    toh(n-1, src, mid, dest);

    // Then transfering last block to dest using mid
    cout << n <<" [ "<< src <<" -> "<< dest <<" ] \n";
    
    // Again transfering n-1 blocks to dest using src
    toh(n-1, mid, dest, src);
}

int main(){
    int n, src, dest, mid;
    cin >> n >> src >> dest >> mid;
    toh(n, src, dest, mid);
    return 0;
}