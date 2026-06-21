#include <stdio.h>

// function prototype
int sum(int, int);
// function definition
int sum(int x, int y)
{
    printf("the sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 1;
    int b = 2;
    sum(a, b); // function call
    // int c = a+b;
    // printf("The sum of a and b is %d\n", c);
    int d = 22;
    int e = 33;
    sum(d, e); // function call

    // int f = d+e;
    //  now if i tell u to add two diff integers so many times wont it
    // be exhausting so there comes the role of  function
    int k = sum(698, 456); // function call
    printf("The sum of 698 and 456 is %d\n", k);

    return 0;
}
