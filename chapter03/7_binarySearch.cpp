#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
  //C++ buitin functions
  vector<int> v = {1, 43, 28, 9, 15, 88};
  sort(v.begin(), v.end());
  cout << "After sorting: " << endl;
  for(int x:v) cout << x << " ";
  cout << endl;

  auto ans = lower_bound(v.begin(), v.end(), 15);
  auto ans2 = upper_bound(v.begin(), v.end(), 15);
  auto ans3 = equal_range(v.begin(), v.end(), 15);

  cout << "lower_bound: " <<  (ans-v.begin()) << endl;
  cout << "upper_bound: " << (ans2-v.begin()) << endl;
  cout << "lower_bound: " << (ans3.first-v.begin()) << ", upper_bound: " << (ans3.second-v.begin()) << endl;
  
  return 0;
}
