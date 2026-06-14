#include <stdio.h>

int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("your age is greater than 10\n");
    }
    if (age % 5 == 0)
    { //== is used to check equality between two variables
        printf("your age is divisible by five ");
    }
    return 0;
}
