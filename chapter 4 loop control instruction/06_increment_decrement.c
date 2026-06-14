#include <stdio.h>

int main(){
    int i = 5;
    i =i+5;//10
    printf("the vaLUE OF i is %d\n",i);//10
    printf("the value of i is %d\n",i++);//10
    printf("the value of i is %d\n",i);//11

    /*  i++ prints i first and then increments(post increment operator)
        ++i increments first and then prints i(post increment operator)
        */
       i+=2;// same as i = i +2;
       printf(" the value of i is %d\n",i);//13
    return 0;
}
    