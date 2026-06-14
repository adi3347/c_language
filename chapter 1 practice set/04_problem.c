#include <stdio.h>

int main(){
    float p, r, t;
    printf("enter the value of principle amount\n");
    scanf("%f",&p);
    printf("enter the value of rate\n");
    scanf("%f", &r);
    printf("enter the value of time\n");
    scanf("%f",&t);
    printf("the simple interest is %f",(p*r*t)/100);

    return 0;
}
