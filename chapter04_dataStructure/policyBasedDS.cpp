#include<bits/stdc++.h>
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, greater<int>, rb_tree_tag, tree_order_statistics_node_update> indexedGreater_set;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexedLess_set;

int main(){
  indexedGreater_set s;
  s.insert(2);
  s.insert(7);
  s.insert(9);
  s.insert(3);

  for(auto x:s) cout << x << " ";
  cout << endl;

  cout << "s.find_by_order(0) -> " << *s.find_by_order(0) << endl;
  cout << "s.order_of_key(3) -> " << s.order_of_key(3) << endl;

  return 0;
}
