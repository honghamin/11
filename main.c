#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoBoard.h""
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	
	//opening
	printf("======================================================\n");
	printf("******************************************************\n");
	printf("                       BINGO GAME                     \n");		
	printf("******************************************************\n");
	printf("======================================================\n");
	
	//game
	
	bingo_init();
    bingo_print();
    bingo_inputNum(21);
    bingo_print();
    
    
	//initial bingo board
	
	//while (game is not end) //È¦¼ö°¡ N_BINGO È°¿ë 
	
	//bingo board print
	
	//print no, of completed line
	
	//select a number
	
	//update the board status 
	 
	 
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("======================================================\n");
	printf("******************************************************\n");
	printf("                  CONGRATULATION!!!!                  \n");
	printf("                       BINGO!!!!!                     \n");
	printf("                     YOU WIN!!!!!                     \n");
	printf("******************************************************\n");
	printf("======================================================\n");
	return 0;
}
