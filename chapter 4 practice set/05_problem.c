#include <stdio.h>

int main(){
    int i=1;
    int sum =0;
    while(i<=10){
        sum +=i;// sum is equal to sum plus i
        i++;
    }
    printf("the sum of first ten natural number is %d\n",sum);
    return 0;
}
// this prompt shows us the sum of first ten natural number using while loop