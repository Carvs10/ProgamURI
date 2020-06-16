#include <stdio.h>
#include <stdlib.h>

// Order the number to lowest to highest
int main(){


	int a,
		b,
		c;


	printf("Tell three numbers to put in order \n");
	scanf("%d %d %d", &a, &b, &c);

	//Checking the order

	if(a > b && a > c){

		if(b > c){
			printf("Ordered: %d %d %d \n", c, b, a);
		}
		else{
			printf("Ordered: %d %d %d \n", b, c, a);	
		}
	}
	else if(b > a && b > c){

		if(a > c){
			printf("Ordered: %d %d %d \n", c, a, b);
		}
		else{
			printf("Ordered: %d %d %d \n", a, c, b);
		}
	}
	else{

		if(a > b){
			printf("Ordered: %d %d %d \n", b, a, c);
		}
		else{
			printf("Ordered: %d %d %d \n", a, b, c);
		}

	}







	return 0;
}