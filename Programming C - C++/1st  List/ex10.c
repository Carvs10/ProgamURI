#include <stdio.h>
#include <stdlib.h>

// Checks is 'n' is a triangular number, which is the product of 3 consecutive natural numbers
int main(){

	int n;
	int i;

	printf("Please insert a non-negative number \n");
	scanf("%d", &n);

	for(i = 1; i*(i+1)*(i+2) < n; i++);

	if(i*(i+1)*(i+2) == n)
		printf("%d is the product of %d*%d*%d \n", n, i, i+1, i+2);
	else
		printf("%d is not a triangular number \n", n);

	return 0;
}