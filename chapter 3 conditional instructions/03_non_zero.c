#include <stdio.h>

int main(){
    if(1){
        printf("this if is executed\n");
    }
    if(2345){
        printf("this if is also executed\n");
    }
    if(2.435){
        printf("this if is also executed\n");
    }
    if('a'){
        printf("this if is also executed\n");
    }
    if(0){
        printf(" this will not get executed\n ");
    }
    return 0;
}
    // char and float both are non zero values 
    // all non zero values are executed in c for if elif statements 
