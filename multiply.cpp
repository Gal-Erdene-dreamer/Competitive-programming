// Include header file
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string num1 = "1235421415454545454545454544";
    string tempnum1 = num1;
    string num2 = "1714546546546545454544548544544545";
    string tempnum2 = num2;
    // Check condition if one string is negative
    if (num1[0] == '-' && num2[0] != '-') {
        num1 = num1.substr(1);
    }
    else if (num1[0] != '-' && num2[0] == '-') {
        num2 = num2.substr(1);
    }
    else if (num1[0] == '-' && num2[0] == '-') {
        num1 = num1.substr(1);
        num2 = num2.substr(1);
    }
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
    string product = "";
    // Multiply with current digit of first number
    // and add result to previously stored product
    // at current position.
    for (int i = 0; i < m.size(); i++) {
        int digit = m[i] % 10;
        int carry = m[i] / 10;
        if (i + 1 < m.size()) {
            m[i + 1] = m[i + 1] + carry;
        }
        product = to_string(digit) + product;
    }
    // ignore '0's from the right
    while (product.length() > 1 && product[0] == '0') {
        product = product.substr(1);
    }
    // Check condition if one string is negative
    if (tempnum1[0] == '-' && tempnum2[0] != '-') {
        product = "-" + product;
    }
    else if (tempnum1[0] != '-' && tempnum2[0] == '-') {
        product = "-" + product;
    }
 
    cout << "Product of the two numbers is :"
         << "\n"
         << product << endl;
}
 
