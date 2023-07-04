#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    scanf("%d%d", &m, &n);
    int arr[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    
    for(int i = m-2; i >= 0; i--)
    		if(arr[i][0]!=0)
    			arr[i][0] += arr[i+1][0];
    	
    
    for(int i = 1; i < n; i++)
    	if(arr[m-1][i]!=0)
    		arr[m-1][i] += arr[m-1][i-1];
    
    		
    	
    for(int i = m - 2; i >= 0; i--)
        for(int j = 1; j < n; j++)
        	if(arr[i][j] != 0)
        		arr[i][j] = max(arr[i+1][j]+arr[i][j], arr[i][j-1] + arr[i][j]); 
  	
        
    printf("%d", arr[0][n-1]);
    return 0;
}
