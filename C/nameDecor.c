#include <stdio.h>
#include <string.h>

int main(void){
    char name[30];
    printf("What's your name?: \n");
    char ldecor[20] = "!";
    char rdecor[20] = "!";
    strcat(ldecor,name);
    strcat(ldecor,rdecor);
    scanf("%s\n", ldecor);
    printf("%s\n", ldecor);
    return 0;
}