#include<bits/stdc++.h>
using namespace std;

const int N = 100;

int main(){
  freopen("adjMatrixWT.txt", "r", stdin);
  int graph[N][N];

  int n, m; cin >> n >> m;

  for(int i=0; i<m; i++){
    int x, y, wt; cin >> x >> y >> wt;

    graph[x][y] = wt;
  }


  //printing the graph
  for(int i=1; i<n+1; i++){
    for(int j=1; j<n+1; j++){
      cout << graph[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
