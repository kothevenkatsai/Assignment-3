//16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
void main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=91)
        printf("uppercase alphabet");
    else if(c>=97 && c<=123)
        printf("lowercase alphabet");
    else
        printf("special character");
}
