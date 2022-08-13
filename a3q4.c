//4. Write a program to check whether a given number is an even number or an odd number without using % operator.
#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int t=n/2;
    if(t*2==n)
        printf("Number is even ");
    else
        printf("number is odd ");
}
