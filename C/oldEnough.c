#include <stdio.h>

int main(void){
    float age;
    printf("How old are you.: ");
    scanf("%f", &age);
    if (age >= 18){
        printf("You're old enough to vote.\n");
    }else if (age >= 16){
        printf("You're old enough to drive.\n");
    }else if (age >= 15){
        printf("You're old enough to get a learners permit.\n");
    }else if (age >= 5){
        printf("You're old enough to go to school.\n");
    }else{
        printf("You're too young.\n");
    }
    return 0;
}