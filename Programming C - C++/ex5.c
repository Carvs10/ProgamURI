#include <stdio.h>
#include <stdlib.h>

int main(){

    int i = 1,
        n,
        count = 0,
        bigg;


    bigg = 1;
    while(i != 31)
    {
        printf("Insert the amount sold today day(%d): \n", i);

        scanf("%d" , &n);

        if(n > bigg)
        {
            bigg = n;
            count = i;
        }

        i++;

    }

    printf("At day %d, the store sold %d discos \n", count, bigg);


    return 0;
}