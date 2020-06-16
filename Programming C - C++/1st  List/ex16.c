#include <stdio.h>
#include <stdlib.h>


// Transforming a binary number into a decimal
int main(){

	int bi,
		dec = 0,
		pow = 1;

	printf("Write down a binary number to convert \n");
	scanf("%d", &bi);

	while(bi != 0){

		dec = dec + bi%10 * pow;
		bi = bi /10;
		pow = pow * 2; 
	}

	printf("The convert bumber is %d \n", dec);


	return 0;
}