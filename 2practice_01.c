# include<stdio.h>

int main(){
    int a;
    printf("Enter the number to be checked: ");
    scanf("%d", &a);
    if(a%97 == 0.00){
        printf("Is divisible.");
    }
    else{
        printf("Not Divisible.");
    }
    return 0;
}
