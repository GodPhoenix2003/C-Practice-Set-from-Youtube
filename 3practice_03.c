#include<stdio.h>

void main(){
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    int a = year%100;
    if(a%4 == 0){
        printf("%d is a leap year.", year);
    }
    else{
        printf("%d is not a leap year.", year);
    }
}