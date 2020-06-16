#include <stdio.h>
#include <stdlib.h>

int maxdiv (int a, int b)
{

	int r;
	while (b != 0){

		r = a %b;
		a = b;
		b = r;
	}
	return a;

}
//Algorithm of Euclides for MDC
int main(){

	int x,
		y;

	printf("Give me two numbers to calculate their MDC \n");
	scanf("%d %d", &x ,&y);

	printf("MDC of %d and %d is %d \n", x, y, maxdiv(x,y));



	return 0;
}