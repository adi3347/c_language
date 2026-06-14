// https://www.asciitable.com/
#include <stdio.h>

int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);
    printf("the character is %c\n", ch);
    printf("the value of character is %d\n", ch);
    // 97 to 122 are lowercase letters in ascii values
    if (ch >= 97 && ch <= 122)
    {
        printf("this is a lowercase character");
    }
    else
    {
        printf("this is a uppercase character");
    }
    return 0;
}
