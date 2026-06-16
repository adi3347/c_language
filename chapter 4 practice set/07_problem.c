#include <stdio.h>

int main(){
    int sum = 0;
    for(int i = 1; i<=10;i++){
        sum+=(8*i);
    }
    printf("the sum of the first ten multiples of 8 is %d\n",sum);
    return 0;
}
   // this prompt shows us the sum of first ten multiples of 8 using for loop