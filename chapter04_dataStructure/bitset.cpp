#include<bits/stdc++.h>
#include<bitset>
using namespace std;

int main(){
  bitset<10> s;
  for(int i=0; i<10; i++) cout << s[i] << " ";
  cout << endl;

  bitset<4> s2(string("1101"));
  bitset<4> s3(string("1010"));

  cout << (s2 & s3) << endl;
  cout << (s2 | s3) << endl;
  cout << (s2 ^ s3) << endl;

  return 0;
}
