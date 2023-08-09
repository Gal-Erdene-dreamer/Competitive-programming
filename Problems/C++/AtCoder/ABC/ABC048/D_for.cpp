#include <bits/stdc++.h>
using namespace std;

string S;
char X[100005];

int main()
{
    cin >> S;
    int moves = 0, k = 0;

    for(int i=0; i<S.size(); i++)
    {
        while(k>=2 && S[i]!=X[k-2])
            k--, moves++;

        X[k++] = S[i];
    }

    if(moves%2)
        cout << "First\n";
    else
        cout << "Second\n";

    return 0;
}
