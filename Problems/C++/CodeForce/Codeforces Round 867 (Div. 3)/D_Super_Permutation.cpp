#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    if (n % 2 == 0){
      vector<int> ans;
      ans.push_back(n);
      for (int j = n - 1; j >= 1; j -= 2){
        ans.push_back(j);
        if (j > 1){
          ans.push_back(n + 1 - j);
        }
      }
      for (int j = 0; j < n; j++){
        cout << ans[j];
        if (j < n - 1){
          cout << ' ';
        }
      }
      cout << endl;
    } else {
      if (n == 1){
        cout << 1 << endl;
      } else {
        cout << -1 << endl;
      }
    }
  }
}