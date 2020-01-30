/* Guessing game example using
	if-else and loops
	by Val Randolf M. Madrid
*/

#include <stdio.h> /* scanf, printf, NULL constant */
#include <stdlib.h> /* rand(), srand(), RAND_MAX constant */
#include <time.h> /* to make use of current time to adjust the seed of the random number generator*/



int main () {

	int choice;
	int tries = 0;
	int rand_num, guess_num;
	//the entire game is one BIG LOOP
	
	do {
		//show the game menu
		printf("\nGuess-the-number Game\n\n");
		printf("1. Play the game\n");
		printf("2. Show Instructions\n");
		printf("3. Quit\n");
		printf("Enter choice: ");
		
		scanf("%i", &choice);  //get user choice
	
		switch ( choice ) {
			//play the game
			case 1: 
                    srand(time(NULL));   //statistics mumbo-jumbo
					rand_num = rand() % 100 + 1;  /*randomizes a number between 1 - 100*/
					printf("\n\tComputer: I'm thinking of a number between 1 - 100\n"); 
					//the game is a loop till you get the number
					do {
						tries++;    /*starts counting attempts*/
						printf("\tEnter your guess: ");
						scanf("%d", &guess_num);
						printf("%d\n", guess_num);
						if ( guess_num < rand_num ) 
							printf("\tHigher!! Guess again!\n");
						else if ( guess_num > rand_num )
							printf("\tLower!! Guess again!\n");
						else
							printf("\n\n\tYou got it in %i attempts, the number is %i! \n\tGoing back into the Main Menu\n", tries,rand_num);
					}while( guess_num != rand_num );
					
					//end of the guessing game part
					break;  //avoid the other cases
			case 2: //just a bunch of printfs
					printf("\n\nTo play, the computer will think of a number from 1 to 100\n");
					printf("and the player will attempt to guess that number until the\n");
					printf("player guesses correctly. The computer will give a clue whether\n");
					printf("the next guess should be higher or lower\n\n");
					break;
					
			case 3: printf("\nGoodbye!!!\n");
					break;
			
			default: printf("Invalid choice\n");

		}
		
	}while( choice != 3 ); /*quit the game*/
	
}/* end of program*/

