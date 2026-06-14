#include<stdio.h>

int main() {
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n';// \n it is just one character not two it is called escape sequence character and it represents a new line 
    ch = '\t';// it gives tab like spaces in middle of words 
    ch = '\"';//  it is used to input double quotes in middle of a string same with \'
    ch = '\\';// used to input a backslash 
    printf("hey i am good \n how about u?");
    return 0;

}
