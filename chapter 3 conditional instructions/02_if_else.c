#include <stdio.h>

int main(){
    int age;
    printf("enter your age\n");
    scanf("%d", &age);

    if (age>10){
        printf("valid user\n");

    }
    else{
        printf("not a valid user\n");

    }
    return 0;
}
    