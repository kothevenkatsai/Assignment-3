//15. Write a program to check whether a given number is positive, negative or zero.
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
        printf("positive");
    else if(n<0)
        printf("negative");
    else
        printf("zero");
}
