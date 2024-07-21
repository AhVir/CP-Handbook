#include<bits/stdc++.h>
using namespace std;

int main(){
  freopen("edgelist.txt", "r", stdin);
  vector<pair<int, int>> graphEdges;
  
  int n, m; cin >> n >> m;
  for(int i=0; i<m; i++){
    int x, y; cin >> x >> y;

    graphEdges.push_back({x, y});
  }


  //printing the graph:
  for(pair<int, int>element:graphEdges){
    cout << element.first << " -> " << element.second << endl;
  }
  
  return 0;
}
