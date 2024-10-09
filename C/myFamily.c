#include <stdio.h>
char siblings[4][20] = {"Jay", "Will", "Bryson", "Josie"};
int i;
int main(void){
    while (i < 4){
        printf("Hello %s\n", siblings[i]);
        i+=1;
    }
    return 0;
}