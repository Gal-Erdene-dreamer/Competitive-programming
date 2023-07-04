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

bool drawtop(char **plane, int x, int y){
	if(plane[x][y] == '*' && plane[x+1][y-1] == '*' && plane[x+1][y] == '*' 
	&& plane[x+1][y+1] == '*' && plane[x+2][y] == '*' && plane[x+3][y-1] == '*' 
	&& plane[x+3][y] == '*'&& plane[x+3][y+1] == '*'){
		plane[x][y] = 'T';
		plane[x+1][y-1] = 'B';
		plane[x+1][y] = 'B';
		plane[x+1][y+1] = 'B';
		plane[x+2][y] = 'B';
		plane[x+3][y-1] = 'B';
		plane[x+3][y] = 'B';
		plane[x+3][y+1] = 'B';
		return true;
	}else
		return false;
}

bool drawbot(char **plane, int x, int y){
	if(plane[x][y] == '*' && plane[x-1][y-1] == '*' && plane[x-1][y] == '*' 
	&& plane[x-1][y+1] == '*' && plane[x-2][y] == '*' && plane[x-3][y-1] == '*' 
	&& plane[x-3][y] == '*'&& plane[x-3][y+1] == '*'){
		plane[x][y] = 'T';
		plane[x-1][y-1] = 'B';
		plane[x-1][y] = 'B';
		plane[x-1][y+1] = 'B';
		plane[x-2][y] = 'B';
		plane[x-3][y-1] = 'B';
		plane[x-3][y] = 'B';
		plane[x-3][y+1] = 'B';
		return true;
	}else
		return false;
}
bool drawright(char **plane, int x, int y){
	if(plane[x][y] == '*' && plane[x-1][y-1] == '*' && plane[x][y-1] == '*' 
	&& plane[x+1][y-1] == '*' && plane[x][y-2] == '*' && plane[x-1][y-3] == '*' 
	&& plane[x][y-3] == '*'&& plane[x+1][y-3] == '*'){
		plane[x][y] = 'T';
		plane[x-1][y-1] = 'B';
		plane[x][y-1] = 'B';
		plane[x+1][y-1] = 'B';
		plane[x][y-2] = 'B';
		plane[x-1][y-3] = 'B';
		plane[x][y-3] = 'B';
		plane[x+1][y-3] = 'B';
		return true;
	}else
		return false;
}
bool drawleft(char **plane, int x, int y){
	if(plane[x][y] == '*' && plane[x-1][y+1] == '*' && plane[x][y+1] == '*' 
	&& plane[x+1][y+1] == '*' && plane[x][y+2] == '*' && plane[x-1][y+3] == '*' 
	&& plane[x][y+3] == '*'&& plane[x+1][y+3] == '*'){
		plane[x][y] = 'T';
		plane[x-1][y+1] = 'B';
		plane[x][y+1] = 'B';
		plane[x+1][y+1] = 'B';
		plane[x][y+2] = 'B';
		plane[x-1][y+3] = 'B';
		plane[x][y+3] = 'B';
		plane[x+1][y+3] = 'B';
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
/*	Activity solution[a][b];

	Activity *solution_rows[a] = { solution[0], solution[1]  and so on  };

	Activity **mother = solution_rows;
	mother[i][j] n solution[i][j] tei adilhan
	Activity solution[a][b];

	Activity* solutionPtrs[a];
	for (int i = 0; i < a; ++i)
    	solutionPtrs[i] = solution[i];

	Activity** mother = solutionPtrs;
*/
 	char *ongotsPtr[SIZE];
	for (i = 1; i <= 10; ++i)
    	ongotsPtr[i] = ongots[i];
//    char **ongotsMother = ongotsPtr;
//    ongotsMother[4][5] ='T';
//	Anhnii utgigi urgelj oor blgahin tuld ashiglaj bga function
//	rand() function n srand()guigeer bnga ijil daraalal butsan
//	undsen tomiyo int nRandonNumber = rand()%((nMax+1)-nMin) + nMin;
	srand(time(NULL));
	int randomnumber;
	int index_x, index_y, choose;
	for(int i = 0; i < 3; ++i){
		choose = rand() % 4 + 1;
		switch(choose){
			case 1:{
				while(true){
					index_x = rand() % 10 + 1;
					index_y = rand() % 10 + 1;
					if(drawtop(ongotsPtr, index_x, index_y))
						break;
				}
				break;
			}
			case 2: {
				while(true){
					index_x = rand() % 10 + 1;
					index_y = rand() % 10 + 1;
					if(drawbot(ongotsPtr, index_x, index_y))
						break;
				}
				break;
			}
			case 3: {
				while(true){
					index_x = rand() % 10 + 1;
					index_y = rand() % 10 + 1;
					if(drawright(ongotsPtr, index_x, index_y))
						break;
				}
				break;
			}
			case 4: {
				while(true){
					index_x = rand() % 10 + 1;
					index_y = rand() % 10 + 1;
					if(drawleft(ongotsPtr, index_x, index_y))
						break;
				}
				break;
			}
		}
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

