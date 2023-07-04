#include <bits/stdc++.h>
using namespace std;
#define elif else if
typedef long long ll;
const int MOD = int(1e9) + 7;

bool cmp(string a, string b){
    return a < b;
}

void solve(){
    int N, K;
    cin >> N >> K;
    int arr[K];

    for(int i = 0; i < K; i++)
        cin >> arr[i];
    
    int res[1000], c=0;
    
    for(int i = N;;i++){
        int x = i;
        bool check = true;
        while(x > 0){
            for(int j = 0; j < K; j++){
                if(arr[j]==x%10){
                    check=false;
                    break;
                }
            }
            if(check==false) break;
            x/=10;
        }
        if(check) {
            cout << i;
            break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    int t=1;
    // cin >> t;
    while(t--) solve();

    return 0;
}