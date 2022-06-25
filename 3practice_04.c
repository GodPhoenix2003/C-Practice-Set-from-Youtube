#include<stdio.h>
#include <ctype.h>

 void main(){
     char a;
     printf("Enter a character: ");
     scanf("%c", &a);
     char b = tolower(a);
    if (a == b){
        printf("%c is in lower case.", a);
    }
    else{
        printf("%c is in upper case.", a);
    }
 }