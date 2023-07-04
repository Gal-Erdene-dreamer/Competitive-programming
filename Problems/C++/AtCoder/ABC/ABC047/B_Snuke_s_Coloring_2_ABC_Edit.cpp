#include <bits/stdc++.h>
using namespace std;
#define elif else if

int W, H, N;
int main(){
    cin >> W >> H >> N;
    int ans = W*H, mxA = 0, mxB = 0, mnA = W, mnB = H;
    for(int i = 0, a, b, c; i < N; i++){
        cin >> a >> b >> c;
        if(c == 1)
            mxA = max(a, mxA);
        elif(c == 2)
            mnA = min(a, mnA);
        elif(c == 3)
            mxB = max(b, mxB);
        else
            mnB = min(b, mnB);
    }
    // cerr << mnA << mnB << mxA << mxB;
    // ans -= H*min((mxA + W-mnA), W) + min((mxB + H-mnB), H)*max((mnA-mxA), 0);
    // cout << ans;
    cout << max(mnA-mxA, 0) * max(mnB-mxB, 0);
}