#include<stdio.h>

float CalcRep(int x, int n){
  float f=(double)n / (double)x;
  return f;
}

main() {
  int m=0,w=0,p=0,n=0,s=0,j=0;
  scanf("%d %d %d %d",&m, &w, &p, &n);
  while(s<n){
    s+=m*w;
    j++;
      while(s>=p && s<n && n/2>m*w){
        float a,b,c;
        a = CalcRep(m*w, n-s);
        b = CalcRep(m*(w+1), n-s+p);
        c = CalcRep((m+1)*w, n-s+p);
        if(m>=w){
          if( a > b ){
            s=s-p;
            w++;
          }
          else break;
        }
        else { 
          if( a > c ){
            s=s-p;
            m++;
          }
          else break;
        }  
    }
  }
printf("%d",j);
}

