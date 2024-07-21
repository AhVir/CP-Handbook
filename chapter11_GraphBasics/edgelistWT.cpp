#include<bits/stdc++.h>
using namespace std;

int main(){
  freopen("edgelistWT.txt", "r", stdin);
  vector<tuple<int, int, int>> edges;

  int n, m; cin >> n >> m;

  for(int i=0; i<m; i++){
    int x, y, wt; cin >> x >> y >> wt;

    edges.push_back({x, y, wt});
  }

  //printing the graph
  for(tuple<int, int, int> e:edges){
    cout << "hi" << " ";
  }
  cout << endl;

  return 0;
}
