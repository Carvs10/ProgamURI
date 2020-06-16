#include <stdio.h>
#include <stdlib.h>

//Checks if 'n' is a perfect number

int main(){

	int n,
		i,
		div = 0;

	printf("Insert a positive number to check if it`s perfect \n");
	scanf("%d" , &n);

	for(i = 1; i  < n; i ++){

		if(n % i == 0)
			div += i;
	}

	


	if( div == n )
		printf("%d is a perfect number \n", n);
	else
		printf("%d is not a perfect number \n", n);


	return 0;
}
