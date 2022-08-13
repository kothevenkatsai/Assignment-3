//9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
void main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int max=n1;
    if(n2>max)
        max=n2;
    if(n3>max)
        max=n3;
    printf("%d",max);
}
