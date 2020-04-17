#include <stdio.h>
#include <stdlib.h>


int main(){

    int n,
        grade = 0,
        min = 0,
        max = 0;

    printf("Please, tell me the number of students: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){

        printf("Put here the grade of the student: \n");
        scanf("%d", &grade);

        min = grade;

        if( min > max)
        {
            max = min;
        }
        
    }

    printf("%d \n", max);



    return 0;
}