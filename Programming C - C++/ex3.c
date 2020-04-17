#include <stdio.h>
#include <stdlib.h>

//Ex.3 Calculate the firts n odds 
int main(){

    int n;

    printf("Insert a number n: \n");

    scanf("%d", &n);

    printf("The result for the first %d odds: \n", n);

    // As usual, take the number by the user to calculate
    for(int i = 0; i < n; i++){

        printf("%d \n", (2*i+1));
    }


    return 0;
}