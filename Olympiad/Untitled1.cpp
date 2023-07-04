#include <stdio.h>

int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int haalga, orts, davhar, k;
	if(d % (a*c) == 0){
		orts = d / (a*c);
		k = a*c;
	}else{
		orts = d / (a*c) + 1;
		k = d % (a*c);
	}
	
	if(k % c == 0){
		haalga = c;
		davhar = k / c;
		
	}else{
		haalga = k % c;
		davhar = k / c + 1;
	}
	printf("%d %d %d", orts, davhar, haalga);
}
