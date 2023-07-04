#include <bits/stdc++.h>
using namespace std;

long long calc_dp(long long k, long long p){
    if(k == 0){
        return 0;
    }
    if(k == 1){
        return 0;
    }
    if(k == 2){
        return 1;
    }
    if(k % 2 == 0){
        return (calc_dp(k/2, p) + calc_dp(k-1, p)) % p;
    }
    return calc_dp(k-1, p) % p;
}

int main(){
    long long k, p;
    cin >> k >> p;
    cout << calc_dp(k, p);
}

