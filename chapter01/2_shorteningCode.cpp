#include<bits/stdc++.h>
using namespace std;

// Typedef
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;


//macros
#define vec(a) vector<a> 

int main(){
  cout << "hi, I\"m working" << endl;

  vi nums = {1, 24, 124};

  for(int x: nums) cout << x << " ";
  cout << endl;


  //vector of pairs
  vec(pi) pairs = {{1, 3}, {2, 0}, {3, 8}};

  for(pi x: pairs) cout << x.first << ", " << x.second << endl;

  return 0;
}
