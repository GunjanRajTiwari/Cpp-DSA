// BFS in connected graph

#include <iostream>
#include <list>
#include <map>
#include <queue>

using namespace std;

class Graph {
  map<int, list<int>> adj;

  public:
  void addEdge(int src, int dest) {
    adj[src].push_back(dest);
  }

  void BFS(int root){
    map<int, bool> visited;
    queue<int> q;

    q.push(root);
    while(!q.empty()){
      int temp = q.front();
      q.pop();
      if(visited[temp]) continue;

      cout << temp <<' ';
      visited[temp] = true;
      for(auto i: adj[temp]){
        q.push(i);
      }
    }
  }
};

int main() {
  Graph g;
  g.addEdge(0, 1);
  g.addEdge(0, 3);
  g.addEdge(1, 2);
  g.addEdge(2, 5);
  g.addEdge(2, 4);
  g.addEdge(3, 0);
  g.addEdge(4, 1);
 
  cout << "BFS from 3: \n";
  g.BFS(3);
  return 0;
}