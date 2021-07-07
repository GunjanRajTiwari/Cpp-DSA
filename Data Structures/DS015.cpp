// DFS of connected graph

#include <iostream>
#include <list>
#include <map>
#include <iterator>

using namespace std;

class Graph {
  map<int, list<int>> adj;
  map<int, bool> visited;

  public:
  void addEdge(int src, int dest){
    adj[src].push_back(dest);
  }

  void DFS(int root){
    cout << root << ' ';
    visited[root] = true;

    list<int>::iterator i;
    for(i = adj[root].begin(); i!=adj[root].end(); ++i){
      if(!visited[*i]) DFS(*i);
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
 
  cout << "DFS from 3: \n";
  g.DFS(3);
  return 0;
}