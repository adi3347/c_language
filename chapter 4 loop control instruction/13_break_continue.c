#include <stdio.h>

int main(){
    for(int i=0;i<54;i++)
    {
        if(i==8){
            continue;//it will skip the current iteration when i is 8
        }
        if(i==53){
            break;//it will break the loop when i is 53
        }
        printf("%d\n", i);
    }
    printf("loop is broken\n");
    return 0;
}
