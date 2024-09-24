#include <stdio.h>
void greeting(char name[]){
    printf("Hello there %s", name);
}
int main(void){
    greeting("Alice\n");
    greeting("Jack\n");
    greeting("John\n");
    greeting("Bill\n");
    greeting("Tom\n");
    return 0;
}