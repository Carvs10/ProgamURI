#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,
		value,
		seq,
		cont = 1;

	printf("Inform me a number \n");
	scanf("%d", &n);

	printf("Now, tell me a sequence of %d numbers \n", n);

	// First value has to be take before for comparsion
	scanf("%d", &value);

	for(int i = 2; i <= n; i ++){

		scanf("%d", &seq);

		if( seq != value ){

			cont += 1;
			value = seq;
		}
	}

	printf("This sequence has %d segments of equal numbers \n", cont);

	return 0;
}