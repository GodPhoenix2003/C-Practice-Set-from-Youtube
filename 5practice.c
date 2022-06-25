#include<stdio.h>
#include<math.h>

void average();
void ctof();
void ftoc();
void gravforce();
int fibonacci(int a, int b, int n);
int naturalnumsum(int sum, int n);
void pattern(int n);
int flag=0,num=1;

void main(){
    int c,opt,A,B,N;
    do{
        printf("Option 1: Average of 3 numbers.\n");
        printf("Option 2: Celsius --> Fahreneit.\n");
        printf("Option 3: Fahreneit --> Celsius.\n");
        printf("Option 4: Force on a body of mass m kg due to Earth's gravity.\n");
        printf("Option 5: To print the nth term of an integer fibonacci series.\n");
        printf("Option 6: To calculate the sum 1st n natural numbers.\n");
        printf("Option 7: To print a solid right angled triangle pattern with '*', till the nth line.\n");
        printf("Enter your option number: ");
        scanf("%d", &opt);
        switch(opt){
            case 1:
                average();
                break;
            case 2:
                ctof();
                break;
            case 3:
                ftoc();
                break;
            case 4:
                gravforce();
                break;
            case 5:
                printf("Enter the 1st and 2nd terms of the fibonacci series, and also which number of term you want to see, respectively:\n");
                scanf("%d %d %d", &A, &B, &N);
                printf("%d th term of the fibonacci series: %d\n", N, fibonacci(A,B,N));
                break;
            case 6:
                printf("Enter the limit till where you wanna find the sum: ");
                scanf("%d", &N);
                printf("Sum of 1st %d natural numbers: %d\n", N, naturalnumsum(0,N));
                break;
            case 7:
                printf("Enter the number of lines you need in the pattern: ");
                scanf("%d", &N);
                pattern(N);
                break;
            default:
                printf("Wrong Input!\n");
                break;

        }
        printf("Do you want to execute the program again?-yes(1)/no(0).\n");
        scanf("%d", &c);
    }while(c==1);
}

void average(){
    float a, b, c;
    printf("Enter the 3 numbers:\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("Average of %d, %d and %d is %f.\n", (int)a, (int)b, (int)c, ((a+b+c)/3.00));
}

void ctof(){
    float c;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &c);
    printf("%f degree celsius = %f degree fahreneit\n", c, (((9.00*c)/5.00)+32.00));
}

void ftoc(){
    float f;
    printf("Enter the temperature in fahreneit: ");
    scanf("%f", &f);
    printf("%f degree celsius = %f degree fahreneit\n", f, ((5.00/9.00)*(f-32.00)));
}

void gravforce(){
    float m;
    printf("Enter the mass of the body: ");
    scanf("%f", &m);
    float M=5.972*pow(10, 24);
    float G=6.674*pow(10, -11);
    float g=9.81;
    float R=6.371*pow(10, 6);
    printf("Force on a body of mass %f kg due to earth is %f N.\n", m, ((G*M*m)/(pow(R, 2))));
}

int fibonacci(int a, int b, int n){
    flag++;
    int c=a+b;
    a=b;
    b=c;
    if(flag<(n-2)){
        return(fibonacci(a,b,n));
    }
    else if(flag==n){
        return c;
    }
}

int naturalnumsum(int sum,int n){
    sum+=n;
    n--;
    if(n>0){
        return(naturalnumsum(sum,n));
    }
    else{
        return sum;
    }
}

void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}