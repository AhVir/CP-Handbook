#include<bits/stdc++.h>
using namespace std;

void printArray(int *arr, int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

void printVector(vector<int> &v){
  for(int x: v) cout << x << " ";
  cout << endl;
}

int main(){
  cout << "it's working" << endl;
  
  int arr[] = {1, 3, 8, 2, 9, 2, 5, 6};
  int n = sizeof(arr)/sizeof(arr[0]);

  //Bubble Sort
  for(int i=0; i<n; i++){
    for(int j=0; j<n-1; j++){
      if(arr[j] > arr[j+1]){
        int temp = arr[j]; arr[j] = arr[j+1]; arr[j+1] = temp;

        //printArray(arr, n);
      }
    }
  }

  cout << "After using bubble sort, the array is: " << endl;
  printArray(arr, n);


  cout << "Sorting a vector: " << endl;
  // using C++ sorting library functions
  // ascending sorting:
  vector<int> v = {4, 2, 5, 3, 5, 8, 3};
  sort(v.begin(), v.end());
  printVector(v);

  //how about desecnding sorting:
  sort(v.rbegin(), v.rend());
  printVector(v);


  cout << "Sorting an array: " << endl;
  int ar[] = {4, 2, 5, 3, 5, 8, 3};
  int n_ar = sizeof(ar)/sizeof(ar[0]);

  sort(ar, ar+n_ar);
  printArray(ar, n_ar);

  cout << "Sorting a string: " << endl;
  string s = "monkey";
  sort(s.begin(), s.end());
  cout << s << endl;
  sort(s.rbegin(), s.rend());
  cout << s << endl;

  return 0;
}
