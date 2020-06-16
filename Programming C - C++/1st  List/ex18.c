#include <stdio.h>
#include <stdlib.h>

// Checks if the values are the sides of a rectangular triangle
int main()

{
	int a,
		b,
		c,
		big;



	printf("Tell me three numbers \n");
	scanf("%d %d %d", &a, &b ,&c );

	

	if( a > b && a > c){
		
		big = a*a;

		
		if (big == (b*b + c*c))
		{
			printf("These are the side of a rectangular triangle \n");
		}
		else{
			printf("These are not the sides of a rectangular triangle\n");
		}
	}

	else if(b > a && b > c){

		big = b*b;
		if (big == (a*a + c*c))
		{
			printf("These are the side of a rectangular triangle \n");
		}
		else{
			printf("These are not the sides of a rectangular triangle\n");
		}	
	}
	else{

		big = c*c;
		if (big == (a*a + b*b))
		{
			printf("These are the side of a rectangular triangle \n");
		}
		else{
			printf("These are not the sides of a rectangular triangle\n");
		}
	}  
	

	return 0;
}