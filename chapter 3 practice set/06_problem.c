#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("enter the value of b\n");
    scanf("%d", &b);
    printf("enter the value of c\n");
    scanf("%d", &c);
    printf("enter the value of d\n");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf(" the greatest of all is %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf(" the greatest of all is %d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf(" the greatest of all is %d\n", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf(" the greatest of all is %d\n", d);
    }
    return 0;
}
