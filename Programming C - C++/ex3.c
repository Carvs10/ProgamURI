#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    printf("Insert a number n: \n");

    scanf("%d", &n);

    printf("The result for the first %d odds: \n", n);

    for(int i = 0; i < n; i++){

        printf("%d \n", (2*i+1));
    }


    return 0;
}