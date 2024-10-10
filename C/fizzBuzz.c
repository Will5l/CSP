#include <stdio.h>
#include <string.h>
#include <time.h>
int xx, user;
char one[50], two[50], three[50];

void delay(int secs){
    int milli = 1000*secs;

    clock_t start = clock();

    while(clock()<start+milli);
}

int main(void){

printf("Give number: \n");
scanf("%d", &user);
printf("Give word: \n");
scanf("%s", &one);
printf("Give word: \n");
scanf("%s", &two);
strcat(three, one);
strcat(three, two);
 for(xx=1;xx<=user;xx++){
        if (xx%3 == 0 && xx%5 == 0){
            printf("%s\n", three);
        }else if (xx%3 == 0){
            printf("%s\n", one);
        }else if (xx%5 == 0){
            printf("%s\n", two);
        }else{
            printf("%d\n", xx);
        }
        delay(0);
 }
return 0;
}