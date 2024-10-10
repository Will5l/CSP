#include <stdio.h>

int xx;

int main(void){
 for(xx=1;xx<=50;xx++){
        if (xx%3 == 0 && xx%5 == 0){
            printf("FizzBuzz\n");
        }else if (xx%3 == 0){
            printf("Fizz\n");
        }else if (xx%5 == 0){
            printf("Buzz\n");
        }else{
            printf("%d\n", xx);
        }
 }
    return 0;
}