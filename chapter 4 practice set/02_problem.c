#include <stdio.h>

int main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=10;i>=1;i--){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
//this prompt asks the user to input a number and then it prints the multiplication of that number from 10 to 1. 
//The program uses a for loop to iterate through the numbers 10 to 1 and prints the result of multiplying the input number by 
//each of those numbers.
