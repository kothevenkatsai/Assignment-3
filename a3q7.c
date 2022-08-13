//7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int d=b*b-4*a*c;
    if(d>0)
        printf("real and distinct");
    else if(d==0)
        printf("real and equal");
    else
        printf("imaginary");
}
