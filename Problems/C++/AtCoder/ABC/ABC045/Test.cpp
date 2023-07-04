#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool cmp(int a, int b){
    // Comparator should return false when elements are equal
    return a > b;
}
int main() {
  int n = 10000;
  int arr[n];
  // insert n instances of 1
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }
  sort(arr, arr+n, cmp);
  ll x = 1ll << 40;
  int a = 47, b = 48;
  cout << ceil(a / b)<< "\n";
  cout << (a + b - 1) / b << "\n";
  cout << __lg(7);
  return 0;
}