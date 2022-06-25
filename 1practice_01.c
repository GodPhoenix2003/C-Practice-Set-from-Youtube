# include<stdio.h>

int main(){
    float l, b;
    printf("Enter the length of the rectangle(in m): ");
    scanf("%f", &l);
    printf("Enter the breadth of the rectangle(in m): ");
    scanf("%f", &b);
    printf("Area of the rectangle(in m^2): %f", l*b);
    return 0;
}