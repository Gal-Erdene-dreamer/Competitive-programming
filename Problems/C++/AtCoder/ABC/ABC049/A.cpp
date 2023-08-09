#include <bits/stdc++.h>
using namespace std;
#define ar array
using ll = long long;
using ull = unsigned long long;
const int mxN = 1e5 + 5;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    char c;
    cin >> c;
    if(c=='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		cout << "vowel\n";
	else
		cout << "consonant\n";
    return 0;
}
