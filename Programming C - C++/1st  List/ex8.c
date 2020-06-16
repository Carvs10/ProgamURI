#include <stdio.h>
#include <stdlib.h>

// Ex.8 -> Calculate Factotial of a non-negative number
int main(){

    int n,
        fact = 1;

    printf("Type a nmuber to calculate his factorial: \n");

    scanf("%d", &n);
    if(n <0 )
        printf("Incvalid! Must be a positive number \n");
    else
    {
        int i = n;
        // Factorial function, can be found at math.h
        while(i != 1){

            fact *= i;

            i--;
        }


        printf("%d! it's equal to: %d \n", n, fact);
    }

    return 0;
}