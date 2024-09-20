#include <stdio.h>

int main(void){
  float income, rent, utilites, groceries, transportation, savings, expenses, total;
  printf("Hello and welcome to our budget calculator\n");
  printf("how much do you make each month?:");
  scanf("%f", &income);
  printf("Your monthly income is $%.2f\n", income);
  printf("how much is your rent?:");
  scanf("%f", &rent);
  printf("Your monthly rent is $%.2f\n", rent);
  printf("how much is your utilites?:");
  scanf("%f", &utilites);
  printf("Your monthly income is $%.2f\n", utilites);
  printf("how much is your groceries?:");
  scanf("%f", &groceries);
  printf("Your monthly groceries is $%.2f\n", groceries);
    return 0;
}