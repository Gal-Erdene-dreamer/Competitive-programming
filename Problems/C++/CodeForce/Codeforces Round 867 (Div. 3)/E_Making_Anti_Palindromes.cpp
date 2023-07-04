#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 0; i < t; i++){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n % 2 == 1){
      cout << -1 << endl;
    } else {
      vector<int> cnt(26, 0);
      for (int j = 0; j < n; j++){
        cnt[s[j] - 'a']++;
      }
      int mx = 0;
      for (int j = 0; j < 26; j++){
        mx = max(mx, cnt[j]);
      }
      if (mx * 2 > n + 1){
        cout << -1 << endl;
      } else {
        vector<int> cnt2(26, 0);
        for (int j = 0; j < n / 2; j++){
          if (s[j] == s[n - 1 - j]){
            cnt2[s[j] - 'a']++;
          }
        }
        int mx2 = 0, sum = 0;
        for (int j = 0; j < 26; j++){
          mx2 = max(mx2, cnt2[j]);
          sum += cnt2[j];
        }
        cout << max((sum + 1) / 2, mx2) << endl;
      }
    }
  }
}