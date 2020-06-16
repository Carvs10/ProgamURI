#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

	int answer,
		lowlimit = 1000,
		highlimit = 9999,
		primP = 0,
		secP =0,
		sum = 0;

	printf("I`m gonna tell which 4 digit numbers with their square root is equal to the sum of 2 pair of digits\n");

	for(int i = lowlimit; i <= highlimit; i++)
	{
		primP = i % 100;
		secP = (i - primP) / 100;

		answer = sqrt(i);
		sum = secP + primP;

		if(answer == sum){
			printf("%d is one of that numbers \n", i);
		}

	}

	printf("That`s all for today! Bye! \n");

	return 0;
}