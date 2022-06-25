#include<stdio.h>

int main(){
    int sub1, sub2, sub3;
    printf("Enter the percentage of subject 1: ");
    scanf("%d", &sub1);
    printf("Enter the percentage of subject 2: ");
    scanf("%d", &sub2);
    printf("Enter the percentage of subject 3: ");
    scanf("%d", &sub3);
    float subavg = (sub1+sub2+sub3)/3;
    if(subavg>=40 && sub1>=33 && sub2>=33 && sub3>=33){
        printf("You have passed.\n");
    }
    else{
        printf("You have failed.");
    }
    return 0;
}