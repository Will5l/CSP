#include <stdio.h>

int main(void){
  float income, rent, utilites, groceries, transportation, savings, expenses, total;
  float prent, putilites, pgroceries, ptransportation, psavings, pexpenses;
  printf("Hello and welcome to our budget calculator\n");
  printf("how much do you make each month?:");
  scanf("%f", &income);
  printf("how much is your rent?:");
  scanf("%f", &rent);
  printf("how much is your utilites?:");
  scanf("%f", &utilites);
  printf("how much is your groceries?:");
  scanf("%f", &groceries);
  printf("how much is your transportation?:");
  scanf("%f", &transportation);
  expenses = rent + utilites + groceries + transportation;
  savings = income * .2;
  total = income - expenses - savings;
  printf("Your monthly income is $%.2f\n", income);
  printf("Your monthly expenses is $%.2f\n", expenses);
  printf("Your monthly savings is $%.2f\n", savings);
  printf("you have $%.2f\n", total);
  prent = rent/income * 100;
  putilites = utilites/income * 100;
  pgroceries = groceries/income *100;
  ptransportation = transportation/income * 100;
  pexpenses = expenses/income * 100;
  psavings = savings/income * 100;
  printf("your expenses are %.1f%% of your income\n", pexpenses);
  printf("your rent is %.1f%% of your income\n", prent);
  printf("your groceries are %.1f%% of your income\n", pgroceries);
  printf("your trasportation is %.1f%% of your income\n", ptransportation);
  printf("your savings are %.1f%% of your income\n", psavings);
    return 0;
}