#include <stdio.h>

int main(){
    int i,n;
    printf("enter the natural number\n");
    scanf("%d", &i);
    for(n=1;i>=n;i--){
        printf("%d\n", i);
    }     
    return 0;
}
     