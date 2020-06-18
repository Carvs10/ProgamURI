#include <stdio.h>
#include <stdlib.h>

int main(){

	int n,
		seq,
		value,
		cont = 0,
		contmax;

	printf("Tell me a number: \n");
	scanf("%d", &n);

	printf("Now write a sequence of %d numbers \n", n);

	scanf("%d", &value);

	contmax = 1;

	for(int i = 2; i <= n; i++){

		scanf("%d", &seq);

		if( seq > value ){

			cont++;
		}
		else{

			if(contmax < cont)
				contmax = cont;
		}

		value = seq;
	}

	printf("The largrest ordered segment has a lenght of %d \n", contmax);

	return 0;
}