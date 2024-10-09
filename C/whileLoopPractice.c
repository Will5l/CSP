#include <stdio.h>
char siblings[8][20] = {"Alexander", "Kathryn", "Andrew", "Vienna", "Victoria", "Treyson", "Jefferson", "Jacob"};
int i;
int main(void){
    while (i < 8){
        printf("%s LaRose\n", siblings[i]);
        i+=1;
    }
    return 0;
}