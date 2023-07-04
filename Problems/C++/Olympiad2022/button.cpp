#include <cstdio>
int main(){
int n, m, i = 0;
scanf("%d%d",&n,&m);
while(n != m){
	if(m > n){
		if(m % 2 == 0){
		m = m / 2;
		i++;
		} else {
		m--; i++;
		}
	} 
	else if (n > m){
		m++; i++;
	}	
}
printf("%d",i);
return 0;
}
