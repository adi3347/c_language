#include <stdio.h>

int main(){
    int i=1;
    int product=1;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        product*=i;// product is equal to product multiplied by i
        i++;
    }
    printf("The factorial of %d is %d\n",n,product);
    return 0;
}
