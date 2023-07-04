#include <bits/stdc++.h>

using namespace std;

main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    int s[n], d[n];
    for(int i = 0; i < n; ++i)
        cin >> s[i] >> d[i];

    int best = 5000;
    for(int i = 1; i < 86401-t; ++i){
        int c = 0, ends = s[0] + d[0];
        for(int j = 0; j < n; ++j){
            if((i+t > s[j] && i+t < ends)
               || (i < s[j] && i+t > s[j])
               || (i > s[j] && i < ends)){
                c++;
                continue;
               }
            if(ends > s[j])
                ends = ends + d[j];
            else
                ends = s[j] + d[j];
        }
        best = min(best, c);
    }

    cout << best;
    return 0;
}
