#include <bits/stdc++.h>

using namespace std;

int inv(int a, int m)
{
    int m0 = m, t, q;
    int x0 = 0, x1 = 1;
 
    if (m == 1)
        return 0;
 
    // Apply extended Euclid Algorithm
    while (a > 1) {
        // q is quotient
        q = a / m;
 
        t = m;
 
        // m is remainder now, process same as
        // euclid's algo
        m = a % m, a = t;
 
        t = x0;
 
        x0 = x1 - q * x0;
            x1 = t;
    }
 
    // Make x1 positive
    if (x1 < 0)
        x1 += m0;
 
    return x1;
}
int findMinX(int num[], int rem[], int k)
{
    // Compute product of all numbers
    int prod = 1;
    for (int i = 0; i < k; i++)
        prod *= num[i];
 
    // Initialize result
    int result = 0;
 
    // Apply above formula
    for (int i = 0; i < k; i++) {
        int pp = prod / num[i];
        result += rem[i] * inv(pp, num[i]) * pp;
    }
 
    return result % prod;
}
/*
 Let us take below example to understand the solution
   num[] = {3, 4, 5}, rem[] = {2, 3, 1}
   prod  = 60 
   pp[]  = {20, 15, 12}
   inv[] = {2,  3,  3}  // (20*2)%3 = 1, (15*3)%4 = 1
                        // (12*3)%5 = 1

   x = (rem[0]*pp[0]*inv[0] + rem[1]*pp[1]*inv[1] + 
        rem[2]*pp[2]*inv[2]) % prod
     = (2*20*2 + 3*15*3 + 1*12*3) % 60
     = (80 + 135 + 36) % 60
     = 11
	 */
int main(){
	int a, b;
	cin >> a >> b;
//	cout << inv(100, 17) << endl;
//	cout << inv(17, 100) << endl;
	cout << (a * 8 * 100 + b * 53 * 17) % 1700;
	return 0;
}
