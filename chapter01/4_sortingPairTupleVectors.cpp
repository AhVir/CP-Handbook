#include<bits/stdc++.h>
using namespace std;


int main(){
  // sorting a pair of vector
  vector<pair<int, int>> v;
  v.push_back({1, 5});
  v.push_back({2, 3});
  v.push_back({1, 2});

  cout << "Ascending sort: " << endl;
  sort(v.begin(), v.end());
  for(auto x:v){
    cout << x.first << ", " << x.second << endl;
  }

  cout << "Descending sort: " << endl;
  sort(v.rbegin(), v.rend());
  for(auto x:v){
    cout << x.first << ", " << x.second << endl;
  }


  //sorting vector of tuples
  vector<tuple<int, int, int>> v_tuple;
  v_tuple.push_back({2, 1, 4});
  v_tuple.push_back({1, 5, 3});
  v_tuple.push_back({2, 1, 3});

  cout << "Ascending order: " << endl;
  sort(v_tuple.begin(), v_tuple.end());
  for(auto x:v_tuple){
    cout << x.first << ", " << x.second << ", " << x.third << endl;
  }

  return 0;
}
