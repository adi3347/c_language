#include <stdio.h>

int main()
{
    float a = 9.0;
    int b = 2;
    float c = a / b;
    int d = 6.7;// it will get demoted to 6 as we are putting float in int 
    printf("The value of a/b is %f\n", c);
    printf("The value of d is %d\n", d);

    return 0;
}
/* int and int gives int
float and int gives float
float and float gives float
*/
