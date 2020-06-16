#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,
		j,
		m;

	printf("Please inset three positives integers \n");
	scanf("%d %d %d", &n, &j &m);

	for(int i = 0; n != 0; i++){

		if( i % m == j % m){
			printf("%d ", i);
			n = n-1;
		}
	}

	printf("\n");

	return 0;
}