#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,
		ant,
		prox;

	printf("Type a number higher than 10: \n");
	scanf("%d", &n);

	while(n < 10){

		printf("Sorry! The program won't work! \n");
		printf("Try again \n");
		scanf("%d", &n);
	}

	ant = n;
	prox = 0;

	while( ant != 0 ){

		prox = prox * 10 + ant % 10;
		ant = ant / 10;
	}

	if(prox == n){
		printf("This is a palindrome \n");
	}
	else{
		printf("This is not a palindrome\n");
	}


	return 0;
}