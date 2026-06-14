//Display the game format
#include <stdio.h>
int main(){
	int secretNumber, guess,attempts=0;
	srand(time(NULL));
	secretNumber=rand()%20+1;
	printf("welcome to the number guessing game!\n");
	printf("I have selected a number between 1 and 20.\n");
	do{
		printf("enter your guess: ");
		scanf("%d", &guess);
		
		attempts++;
		
		if(guess>secretNumber){
			printf("Too high!\n");
		}
		else if (guess<secretNumber){
			printf("Too low!\n");}
			else{printf("congratulations!\n");
			printf("You guessed the number in %d attempt (s).\n", attempts);
	}
	}while (guess !=secretNumber);
	return 0;
}
	