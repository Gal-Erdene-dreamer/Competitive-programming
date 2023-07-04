#include <iostream>
#include <vector>

using namespace std;

int partition(int n, int k) {
    vector<int> memo(n + 1, 0); // initialize memoization table
    memo[0] = 1; // there is one way to partition 0

    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            memo[j] += memo[j - i]; // add the number of partitions without overlaps
            if(memo[j] >= k)
            	memo[j]-=k;
            
        }
    }

    return memo[n]; // the number of partitions of n is memo[n]
}

int main() {
    int n, k;
    cin >> n >> k;
    cout << partition(n, k) % k << endl;
    return 0;
}

