#include <stdio.h>

float c2f(float);
float c2f(float c){
      return ((9*c)/5) + 32;
}
int main(){
    float c;
    printf(" enter the temperature in celsius:\n");
    scanf("%f", &c);
    printf("the temperature in faranhite is %f\n", c2f(c));

    
    return 0;
}
