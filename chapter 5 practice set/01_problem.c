#include <stdio.h>
float average(float a, float b, float c);
float average(float a, float b, float c){
    return (a +b+c)/3.0;
}
int main(){
    float a,b,c;
    printf("Enter three numbers: \n");
    scanf("%f %f %f",&a,&b,&c);
    printf("average of %.2f,%.2f and%.2f is %.2f\n", a, b, c, average(a, b, c));

    return 0;
}
