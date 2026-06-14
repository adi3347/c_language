#include <stdio.h>

int main(){
    int marks1,marks2,marks3;
    printf("enter marks1:\n");
    scanf("%d",&marks1);
    printf("enter marks2:\n");
    scanf("%d",&marks2);
    printf("enter marks3:\n");
    scanf("%d",&marks3);
    printf("the marks are %d,%d and %d\n", marks1,marks2,marks3);
    if(marks1<33||marks2<33||marks3<33){
        printf("you failed indivisual subjects because your marks are dropping down the 33 percent criteria ");
    } 
    else if((marks1+marks2+marks3)/3 < 40){
        printf("you failed beacuse u didnt met the 40 criteria ");
    }
    else{
        printf("you passed");
    }
    return 0;
}
    