#include <stdio.h>
#include <stdlib.h>

//Transforms a decimal into a Binary Number
int main(){

	int deciNumb;
	int binaNumb;
	int aux;
	int pow = 1;
	int digt;

	printf("Type a number to convert into a binary one \n");
	scanf("%d", &deciNumb);

	aux = deciNumb;
	binaNumb = 0;
	 
	while ( aux > 0 ){

		digt = aux % 2;
		aux = aux / 2;
		binaNumb = binaNumb + digt*pow;
		pow = pow*10;

	}

	printf("The binary number is: %d \n", binaNumb);

	return 0;
}