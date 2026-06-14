#include <stdio.h>

int main(){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);
     if (age>60){
        printf(" you can drive and u are a senior citizen\n");

     }
     else if(age>40){
        printf("you are elder and u can drive\n");
     }
     else if (age>18){
        printf(" you can drive\n");
     }
     else{
        printf("grow up man\n");
     }
    return 0;
}
    