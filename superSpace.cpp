#include <cstdio>

int main(){
	int n , s;
	int a[10000] , b[10000];
	scanf("%d" , &n);
	for(int i = 1 ; i <= n ; i++){
	scanf("%d" , &a[i]);
	}
	scanf("%d" , &s);
	while(s < 0) {
		s += n;
	}
	s %= n;
	for(int i = 1 ; i <= n ; i++){
		if(i + s <= n)b[i + s] = a[i];
		else b[(i + s) % n] = a[i];
	}
	for(int i = 1 ; i <= n ; i ++){
	printf("%d " , b[i]);
	}
}
