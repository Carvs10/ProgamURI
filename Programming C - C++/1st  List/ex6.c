#include <stdio.h>
#include <stdlib.h>

// Ex6. Check for a the grades in a classroom
int main(){

    int n,
        grade,
        min,
        max = 10;

    printf("Please, tell me the number of students: \n");
    scanf("%d", &n);

    // Check for the highest and lowest grade
    for(int i = 0; i < n; i++){

        printf("Put here the grade of the student: \n");
        scanf("%d", &grade);

         
        if(max < grade)
        {
            max = grade;
        }
        if(min > grade)
            min = grade;

    }

    printf("Min grad of class: %d \n", min);
    printf("Max grad of class: %d \n", max);


    return 0;
}