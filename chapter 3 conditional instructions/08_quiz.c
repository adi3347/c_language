#include <stdio.h>

int main(){
    int g;
    printf("enter the grade of student\n");
    scanf("%d",&g);
    if(g>=90 && g<=100){
        printf("you got a");
    }
    else if(g>=80 && g<90){
        printf("you got b");

    }
    else if(g>=70 && g<80){
        printf("you got c");
    }
    else if(g>=60 && g<70){
        printf("you got d");
    }
    else{
        printf(" dumbass you failed");
    }
    return 0;
}
    