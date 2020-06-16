#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{

	int j = 1;
	int i = 0;
	int t;

	if(n == 1 || n == 2)
		return 1;
	else{
		for(int k = 1 ; k < n; k++){

			t = i+j;
			i = j;
			j = t;
		}
	}

	return t;
}


int main(){

	int x;

	printf("Select a number at Fibonacci order \n");
	scanf("%d", &x);

	printf("%d \n", fib(x) );


	return 0;
}