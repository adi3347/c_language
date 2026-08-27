#include <stdio.h>
float force(float);
float force(float mass){
    return mass*9.8;

}

int main(){
    int m;
    printf("enter the mass of an object in kg:\n");
    scanf("%d",&m);
    printf(" the force acting on the object is %f\n", force(m));
    
    return 0;
}
