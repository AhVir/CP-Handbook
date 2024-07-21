#include<bits/stdc++.h>
using namespace std;

struct P {
  int x, y;
  
  bool operator<(const P &p){
    if(x != p.x) return x < p.x;
    else return y < p.y;
  }
};

int main(){
  P p1 = {2, 10};
  P p2 = {3, 9};
  vector<P> v = {p1, p2};

  sort(v.begin(), v.end());

  for(auto element:v){
    cout << element.x << ", " << element.y << endl;
  }

  return 0;
}
