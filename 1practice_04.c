# include<stdio.h>

int main(){
    float P, R, T, SI;
    printf("Enter the Principal, Rate of Interest and Time Period in years, respectively: \n");
    scanf("%f", &P);
    scanf("%f", &R);
    scanf("%f", &T);
    SI = P*R*T;
    printf("SI = Rs.%f", SI);
    return 0;
}
