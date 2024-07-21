#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+7;

int main(){
  freopen("adjlistWT.txt", "r", stdin);
  vector<pair<int, int>> graph[N];

  int n, m; cin >> n >> m;

  for(int i=0; i<m; i++){
    int x, y, wt; cin >> x >> y >> wt;

    graph[x].push_back({y, wt});
  }

  //printing the graph:
  for(int i=1; i<n+1; i++){
    cout << i << "-> ";
    for(auto x:graph[i]) cout << "(" << x.first << ", " << x.second << ")" << " -> ";
    cout << endl;
  }

  return 0;
}
