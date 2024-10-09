#include <stdio.h>

int x;
x = 0;
int main(void){
 while(x<50)
    x += 1;
    if (x%3 == 0 && x%5 == 0 && x != 0)
        printf("FizzBuzz");

    return 0;
}