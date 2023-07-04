#include <bits/stdc++.h>
using namespace std;

long int miniumPasses(long int m, long int w, long int p, long int n){
long int dav = 0, chiher = 0, nemelt = 0;

while(chiher<n){
dav++;
chiher += m * w;
if(chiher >= n) break;
if(chiher >= p){
nemelt = chiher/p;
chiher -= (chiher/p)*p;
}
if(nemelt%2==0){
m += nemelt/2;
w += nemelt/2;
}else{
if(m > w){
w += nemelt;;
}
else{
m += nemelt;
}
}

nemelt = 0;
}


return dav;
}

int main(){

long int m, w, p, n, j;

cin >> m >> w >> p >> n;

j = miniumPasses(m,w,p,n);

cout << j;
return 0;
}
