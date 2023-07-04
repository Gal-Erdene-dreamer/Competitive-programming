#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int l, r;
        cin >> l >> r;
        int min_diff = 9;
        int num = l;
        for (int j = l; j <= r; j++) {
            string s = to_string(j);
            int diff = max(s) - min(s);
            if (diff < min_diff) {
                min_diff = diff;
                num = j;
                if (min_diff == 0) {
                    break;
                }
            }
        }
        cout << num << endl;
    }
    return 0;
}
