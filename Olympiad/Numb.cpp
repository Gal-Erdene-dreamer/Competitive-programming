#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int counter[t];
    long long int b[t], n[t];
    for(int i = 0; i < t; i++){
        cin >> b[i] >> n[i];
        counter[i] = 0;
        while(n[i] > 0){
            n[i] /= b[i] + 1;
            counter[i]++;
        }
    }
    for(int i = 0; i < t; i++)
        cout << counter[i] << endl;
    return 0;
}
