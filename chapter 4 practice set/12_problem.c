#include <stdio.h>

int main(){
        int i, n, prime = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 1 || n == 0)
    {
        prime = 1;
        printf("%d is not a prime number\n", n);
    }
    else
    {
        int i = 2;
        do
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
            }
            i++;
        }while ( i < n);
        if (prime)
        {
            printf("%d is not a prime number\n", n);
        }
        else
        {
            printf("%d is a prime number\n", n);
        }
    }
    return 0;
}
    
    // this prompt asks the user to input a number and then it checks whether that number is prime or not using a do while loop.