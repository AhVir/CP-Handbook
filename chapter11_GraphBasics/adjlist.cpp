#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int main(){
  freopen("adjlist.txt", "r", stdin);
  //adjacency list representation of graph
  vector<int> adj[N];

  int n, m; cin >> n >> m;

  for(int i=1; i<m+1; i++){
    int x, y; cin >> x >> y;

    adj[x].push_back(y);
  }

  //printing the graph:
  cout << "Printing the array: " << endl;
  for(int i=1; i<m; i++){
    cout << i << "-> ";
    for(int x:adj[i]) cout << x << " - ";
    cout << endl;
  }

  return 0;
}
