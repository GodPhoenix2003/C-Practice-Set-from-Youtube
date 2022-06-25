#include<stdio.h>

void main(){
    int num[4];
    int i, j, temp;
    printf("Enter the 4 numbers:\n");
    for(i=0; i<4; i++){
        scanf("%1d", &num[i]);
    }
    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            if(num[i]>num[j]){
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("Greatest of the 4 numbers is: %d\n", num[3]);
}