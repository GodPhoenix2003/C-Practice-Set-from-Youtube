#include<stdio.h>

void main(){
    float income;
    printf("Enter the monthly income(in lakhs): ");
    scanf("%f", &income);
    if(income<2.5){
        printf("No income tax for Rs.%f income.\n", income);
    }
    if(income>=2.5 && income<5.0){
        printf("Income Tax for Rs.%f income is 5%.\n", income);
        float tax = income * 0.05 * 100000;
        printf("Income Tax = %f\n", tax);
    }
    if(income>=5.0 && income<10.0){
        printf("Income Tax for Rs.%f income is 20%.\n", income);
        float tax = income * 0.20 * 100000;
        printf("Income Tax = %f\n", tax);
    }
    if(income>=10.0){
        printf("Income Tax for Rs.%f income is 30%.\n", income);
        float tax = income * 0.30 * 100000;
        printf("Income Tax = %f\n", tax);
    }
}