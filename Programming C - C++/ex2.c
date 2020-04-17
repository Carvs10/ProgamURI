#include <stdio.h>
#include <stdlib.h>


// Ex.2 -> Calculate the sum of first n numbers
int main(){

    int n,
        sum = 0;

    printf("Use me to calculate the sum of fisrt positive integers to n \n");

    scanf("%d", &n);

    //The sum is made according the number n inserted by the user
    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("The result is %d\n", sum);
    return 0;
}