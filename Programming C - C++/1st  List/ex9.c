#include <stdio.h>
#include <stdlib.h>
 
// Check on 'n' the multiples of i,j or both.

int main(){

	int n,
		i,
		j;


	printf("Please, give me Three numbers, all positive and different of zero\n");
	scanf("%d %d %d", &n, &i, &j);

	for(int k = 0; k <= n; k++){

		if( k % i == 0 || k % j == 0 ){

			printf("%d ", k);
		}
	}

	printf("\n");


	return 0;
}