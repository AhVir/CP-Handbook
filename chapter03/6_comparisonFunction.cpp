#include<bits/stdc++.h>
using namespace std;

bool comp(string a, string b){
  if(a[0]=='t') return a < b;
  else return b < a;
}

bool comp2(string a, string b){
  if(a.size() < b.size()) return a < b;
  else return b < a;
}

int main(){
  vector<string> v = {"tanvir's", "sheikh", "ahmed"};
  sort(v.begin(), v.end(), comp2);

  for(auto x: v) cout << x << " ";
  cout << endl;

  return 0;
}
