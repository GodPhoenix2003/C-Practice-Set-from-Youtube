#include<stdio.h>

void main(){
    int sum=0;
    for(int i=1; i<=10; i++){
        sum+=i*8;
    }
    printf("Sum=%d",sum);
}