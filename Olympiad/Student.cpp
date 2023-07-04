#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = int(1e9) + 7;
double PI = atan(1)*4;

int day[7];
int day2[14];

bool compare(pair <int, int> &a, pair <int, int> &b ){
    return a.first < b.first;
}


void solve(){
    int k;
    int sum = 0;
    int count = 0;
    cin >> k;
    for(int i = 0; i < 7; ++i){
         cin >> day[i];
         day2[i] = day[i];
         day2[i+7] = day[i];
         sum+=day[i];
    }

    if(k % sum == 0){
        count = (k / sum) * 7 - 7;
        k=sum;
    }else{
        count = (k / sum) * 7;
        k%=sum;
    }
    int min1 = 7;
    for(int i = 0; i < 7; ++i){
        sum = 0;
        for(int j = i; j < i+7; j++){
            sum+=day2[j];
            if(sum == k)
                min1 = min(min1, j-i+1);
        }
    }
    cout << count+min1 << "\n";
};


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
