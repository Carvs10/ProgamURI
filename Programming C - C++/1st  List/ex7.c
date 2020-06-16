#include <stdio.h>
#include <stdlib.h>

// Calculate the sum of even numbers in a sequence of n numbers
int main(){

    int n,
        k,
        sum = 0;

    printf("Insert a number: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        printf("Please give me a number: \n");
        scanf("%d", &k);

        // Check the even numbers
        if(k%2 == 0)
        {
            sum +=k;
        }
    }

    printf("The sum of evens it's: %d \n", sum);


    return 0;
}
