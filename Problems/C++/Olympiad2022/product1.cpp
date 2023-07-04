// Include header file
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string num1;
    string num2;
     
    cin>> num1 >> num2;
   
    string s1 = num1;
    string s2 = num2;
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
 
    vector<int> m(s1.length() + s2.length());
    // Go from right to left in num1
    for (int i = 0; i < s1.length(); i++) {
        // Go from right to left in num2
        for (int j = 0; j < s2.length(); j++) {
            m[i + j]
                = m[i + j] + (s1[i] - '0') * (s2[j] - '0');
        }
    }
    string product = "", s;
    // Multiply with current digit of first number
    // and add result to previously stored product
    // at current position.
    for (int i = 0; i < m.size(); i++) {
        int digit = m[i] % 10;
        int carry = m[i] / 10;
        if (i + 1 < m.size()) {
            m[i + 1] = m[i + 1] + carry;
        }
        s = digit + '0';
        product = s + product;
    }
    // ignore '0's from the right
    while (product.length() > 1 && product[0] == '0') {
        product = product.substr(1);
    }
    string product2;
 	if(product.length() > 17){
		for(int i = product.length() - 17; i < product.length(); i++){
			product2 += product[i];
		}
		while (product2.length() > 1 && product2[0] == '0') {
        	product2 = product2.substr(1);
    	}
		cout << product2 << endl;
	}else
		cout << product << endl;
	
    
}
 
