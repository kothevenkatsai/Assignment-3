//17. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
void main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180)
        printf("it is a  valid triangle");
    else
        printf("it is not a valid triangle");
}
