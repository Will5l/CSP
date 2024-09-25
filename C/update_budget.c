#include <stdio.h>
float income, rent, utilites, groceries, transportation, savings, expenses, total;

float input(char type[], float var){
    printf("how much is your %s?: ", type);
    scanf("%f", &var);
    return var;
}


void percent(char type[], int amount){
    int per = amount/income*100;
    printf("your %s is %d%% of your income\n", type, per);
}


int main(void){
  printf("Hello and welcome to our budget calculator\n");
  income = input("income", income);
  rent = input("rent", rent);
  utilites = input("utilites", utilites);
  groceries = input("groceries", groceries);
  transportation = input("transportation", transportation);
  expenses = rent + utilites + groceries + transportation;
  savings = income * .2;
  total = income - expenses - savings;
  printf("Your monthly income is $%.2f\n", income);
  printf("Your monthly expenses is $%.2f\n", expenses);
  printf("Your monthly savings is $%.2f\n", savings);
  printf("you have $%.2f\n", total);
  percent("expenses", expenses);
  percent("rent", rent);
  percent("utilites", utilites);
  percent("groceries", groceries);
  percent("transportation", transportation);
  percent("savings", savings);

    return 0;
}