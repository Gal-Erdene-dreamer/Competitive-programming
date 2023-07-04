#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MOD = int(1e9) + 7;

int arr[30000];
/*
void solve(){
    string s;
    cin >> s;
    int c = 0;
    for(char i : s){
        if(i >= 'A' && i <= 'Z')
            c++;
    }
    if (c > s.size()-c)
        for (auto i =s.begin(); i != s.end(); i++ )
            putchar(toupper(*i));
    else
        for (auto i : s)
            putchar(tolower(i));
}

void solve(){
    int n;
    cin >> n;
    int a = 1, temp;
    int b = 1;
    int sum = 1;
    for(int i = 2; i <= n; i++){
        sum = a + b;
        if(sum >= MOD)
            sum-=MOD;
        temp = a;
        a = sum;
        b = temp;
    }
    cout << sum << " ";
}
*/

void solve(){
    int l, r;
    cin >> l >> r;
    unordered_set<int> s(arr + l - 1, arr + r);
    cout << s.size() << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, q;
    cin >> n;
    // Read input array
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Compute the number of distinct elements in each possible range
    vector<vector<int>> counts(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        set<int> s;
        for (int j = i; j < n; ++j) {
            s.insert(a[j]);
            counts[i][j] = s.size();
        }
    }

    // Read number of queries
    cin >> q;

    // Process each query
    while (q--) {
        int l, r;
        cin >> l >> r;

        // Output the number of distinct elements in the range [l, r]
        cout << counts[l-1][r-1] << "\n";
    }
    return 0;
}
