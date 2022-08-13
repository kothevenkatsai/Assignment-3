//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
        printf("yes");
    else
        printf("no");

}
