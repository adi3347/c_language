#include <stdio.h>

int main(){
    int product=1;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        product*=i;// product is equal to product multiplied by i
    }
    printf("The factorial of %d is %d\n",n,product);
    return 0;
}
    // this prompt asks the user to input a number and then it calculates the factorial of that number using a for loop.