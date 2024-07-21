#include<bits/stdc++.h>
using namespace std;


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);


  //128bit int
  __int128_t num = 23;
  __int128_t num2 = 24;
  
  __int128_t addition = num + num2;

  double x = 0.3*3 + 0.1;
  double y = 1.0;
  printf("%.20f\n", x);
  printf("%f\n", x);
  cout << x << endl;

  if(abs(x-y) < 1e-9){
    cout << "X: " << x << " & Y: " << y << " are equal" << endl;
  }

  return 0;
}
