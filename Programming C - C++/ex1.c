#include <stdio.h>
#include <stdlib.h>


// Ex1.: Print all integgers squared
//Online Course

int main(){

    int a,
        sqrd;

    printf("Use me to calculate the squared numbers. \n");

    printf("Please insert the sequence of numbers, followed by 0 to finsh : \n");

    scanf("%d", &a);

    while(a != 0){

        sqrd = a*a;
        printf("The squared number of %d it's %d\n", a, sqrd);
        scanf("%d", &a);
    }
    
    return 0;
}

