#include <stdio.h>


int factorial(int);
int factorial(int n){
    if (n==1||n==0){// base condition
        return 1;
    }
    /*
    factorial(n)= 1x2x3x4....xn-1xn
    factorial(n-1)= 1x2x3x4x....x n-1
    factorial(n)= factorial(n-1)xn
    */
   return factorial(n-1)*n;



}
int main(){
    int a;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("the factorial of %d is %d\n",a,factorial(a));
    return 0;
}
    