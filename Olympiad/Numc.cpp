#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    string s[N];
    int i, j;
    string b;
    for(i = 0; i < N; ++i){
        cin >> s[i];
        sort(s[i].begin(), s[i].end());
        b[i] = s[i][0];
        for(j = 0; j < s[i].length(); ++j){
            if(b[i] == 91) b[i]+=6;
            if(b[i] == 122){b[i] = '.'; break;}
            if(s[i][j] == s[i][j+1]) continue;
            if(b[i] > s[i][0] && b[i] != s[i][j]) break;
            else b[i]++;
        }
    }
    for(i = 0; i < N; ++i)
        cout << b[i];
    return 0;
}
