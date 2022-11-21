#include "bingoBoard.h"
#include <stdlib.h>

#define BINGONUM_HOLE   -1

static int bingoBoard[N_SIZE][N_SIZE];
static int numberStatus[N_SIZE*N_SIZE];


void bingo_init(void)
{
	int i, j;
	int cnt = 1;
	
	for (i=0;i<N_SIZE;i++)
	    for (j=0;j<N_SIZE;j++)
	    {
	    	if (cnt == 15)
	    	{
	    		bingoBoard[i][j] = BINGONUM_HOLE;
	    		numberStatus[cnt-1] = BINGONUM_HOLE;
	    		
	    		cnt++;
			}
			else
			{
				numberStatus[cnt-1] = i*N_SIZE+j;
				bingoBoard[i][j] = cnt++;
			}
		}
}
void bingo_print(void)
{
	int i, j;
	int cnt = 1;
	printf("======================================================\n");
	for (i=0;i<N_SIZE;i++) {
		for (j=0;j<N_SIZE;j++) {
			if (bingoBoard[i][j] == BINGONUM_HOLE)
			    printf("X\t");
			else
			    printf("%i\t", bingoBoard[i][j]);
		}
		printf("\n");
	}
	printf("======================================================\n\n");
}
void bingo_inputNum(int sel)
{
	int index_r, index_c;
	
	index_r = numberStatus[sel-1]/N_SIZE;
	index_c = numberStatus[sel-1]%N_SIZE;
	
	bingoBoard[index_r][index_c] = BINGONUM_HOLE;
	
	
}
int bingo_countCompletedLine(void)
{
	
}
