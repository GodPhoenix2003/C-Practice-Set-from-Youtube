# include<stdio.h>

int main(){
    int opt;
    float C, F;
    printf("Option 1: Celsius -> Fahrenheit. \n");
    printf("Option 2: Fahrenheit -> Celsius. \n");
    printf("Choose your option: ");
    scanf("%d", &opt);
    if(opt == 1){
        printf("Enter the temperature in Celsius:");
        scanf("%f", &C);
        F = (((9.00/5.00)*C)+32.00);
        printf("Temperature in Fahrenheit: %f", F);
    }
    else{
        printf("Enter the temperature in Fahrenheit:");
        scanf("%f", &F);
        C = ((5.00/9.00)*(F-32.00));
        printf("Temperature in Celsius: %f", C);
    }
    return 0;
}