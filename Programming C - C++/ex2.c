#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,
        sum = 0;

    printf("Use me to calculate the sum of fisrt positive integers to n \n");

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("The result is %d\n", sum);
    return 0;
}