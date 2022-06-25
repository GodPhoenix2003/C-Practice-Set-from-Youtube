#include<stdio.h>

void main() {
    int n, facto = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        facto = facto * i;
    }
    printf("%d! = %d", n, facto);
}