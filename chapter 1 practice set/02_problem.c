#include <stdio.h>

int main(){
   // int r = 7;
    //int height = 78;
    int radius, height;
    printf("enter radius\n");
    scanf("%d", &radius);
    printf("enter height\n");
    scanf("%d", &height);
    printf("the area of cicrle with radius %d is %f\n", radius ,3.14*radius*radius);
    printf("the volume of cylinder with radius %d and height %d is %f", radius,height,3.14*radius*radius*height);

    return 0;
}
