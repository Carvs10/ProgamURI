#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pot(int x, int y)
{

    if(y == 0)
        return 1;
    while(y > 1)
    {
        x *=x;
        y--;
    }

    return x;

}



int main(){

    int x,
        n;

    printf("Please, insert two numbers, and the second must not be negative: \n");
    scanf("%d %d", &x, &n);

    
    printf("Result of %d elevat to %d it's : %.1f \n", x, n, pot(x,n));


    return 0;
}