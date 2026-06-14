#include <stdio.h>

int main(){
    int a=1;int b=1;// for easy understanding let us assume 1 ans true and 0 as false in c language
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("the value of not(a) is %d\n", !a);// it changes true to false and false to true  means 1 ko 0 and  0 ko 1
    if(a && b){
        printf("both are true\n");
    }
    // same as writing.....
    if(a){
        if(b){
            printf("both are true\n");
        }
    }
    return 0;
}
    