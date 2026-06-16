#include <stdio.h>

int main(){
    // using do while loop
  //  int i=1;
  //  int sum =0;
  //  do{
  //      sum +=i;// sum is equal to sum plus i
  //      i++;
  //  }while(i<=10);
  // using for loop
  int sum = 0;
  for(int i = 1; i<=10;i++){
    sum+=i;
  }
    printf("the sum of first ten natural number is %d\n",sum);
    return 0;
}
// this program shows the sum first ten natural numbers using do while and for loop..
