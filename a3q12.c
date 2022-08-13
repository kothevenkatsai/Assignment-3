// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
void main()
{
    char c;
    scanf("%c",&c);
    if(c>=65 && c<=91)
    {
        printf("alphabet is uppercase");
    }
    else if(c>=97 && c<=123)
    {
        printf("alphabet is lowercase");
    }
}
