#include<stdio.h>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define SIZE 11
void printBoard(char plane[SIZE][SIZE]){

	int i , j;
	for (i = 1 ; i<=10 ; i++){
		for(j=1 ; j<=10 ; j++){
//			printf("%c",plane[i][j]);
			cout << plane[i][j];
		}
		printf("\n");
	}
} 

bool drawtop(char plane[SIZE][SIZE], int x, int y){
	if(plane[x][y] == '*' && plane[x+1][y-1] == '*' && plane[x+1][y] == '*' 
	&& plane[x+1][y+1] == '*' && plane[x+2][y] == '*' && plane[x+3][y-1] == '*' 
	&& plane[x+3][y] == '*'&& plane[x+3][y+1] == '*'){
		plane[x][y] == 'T';
		plane[x+1][y-1] == 'B';
		plane[x+1][y] == 'B';
		plane[x+1][y+1] == 'B';
		plane[x+2][y] == 'B';
		plane[x+3][y-1] == 'B';
		plane[x+3][y] == 'B';
		plane[x+3][y+1] == 'B';
		return true;
	}else
		return false;
}

int main() 
{
	int i , j ;
	int x , y;
	int number = 3;
	char ongots[SIZE][SIZE];
	for (i = 1 ; i<=10 ; i++){
		for(j=1 ; j<=10 ; j++){
			ongots[i][j]='*';
		}
	}
//	Anhnii utgigi urgelj oor blgahin tuld ashiglaj bga function
//	rand() function n srand()guigeer bnga ijil daraalal butsan
//	undsen tomiyo int nRandonNumber = rand()%((nMax+1)-nMin) + nMin;
	srand(time(NULL));
	int randomnumber;
	int index_x, index_y;
	for(int i = 0; i < 2; i++){
	    randomnumber = rand() % 10 + 1;
	    printf("%d\n", randomnumber);
	}
//	while(true){
//		index_x = rand() % 10 + 1;
//		index_y = rand() % 10 + 1;
//		if(drawtop(ongots, index_x, index_y)){
//			break;
//		}
//	}
//	ongots[5][8]='T';
//	ongots[4][7]='B';
//	ongots[5][7]='B';
//	ongots[6][7]='B';
//	ongots[5][6]='B';
//	ongots[5][5]='B';
//	ongots[4][5]='B';
//	ongots[6][5]='B';
//	
//	ongots[1][2]='T';
//	ongots[2][1]='B';
//	ongots[2][2]='B';
//	ongots[2][3]='B';
//	ongots[3][2]='B';
//	ongots[4][1]='B';
//	ongots[4][2]='B';
//	ongots[4][3]='B';
//	
//	ongots[9][5]='T';
//	ongots[8][6]='B';
//	ongots[9][6]='B';
//	ongots[10][6]='B';
//	ongots[9][7]='B';
//	ongots[8][8]='B';
//	ongots[9][8]='B';
//	ongots[10][8]='B';
	if(drawtop(ongots, 1, 2)){
		cout << "bollo" << endl;
	}
	while(1>0){
		printf("\nx:");
		scanf("%d", &x);
	
		printf("y:");
		scanf("%d", &y);
		
		
		if(x<11 && y<11){
			if(ongots[x][y] == 'T'){
				ongots[x][y] = 'X';
				printf("Ta sonooloo\n");
				printBoard(ongots);
				number-=1;
			}
			else if(ongots[x][y] == 'B'){
				ongots[x][y] = 'S';
				printBoard(ongots);
			}
			
			else{
				ongots[x][y]='O';
				printBoard(ongots);
			}
		}
		else
		{
			printf("Ta buruu utga oruulsan b\n");
		}
		if(number == 0)
		{
			printf("Ta xojloo");
			break;
		}

	}
	return 0;
}
