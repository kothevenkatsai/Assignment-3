//6. Write a program to print greater between two numbers. Print one number of both are the same.
void main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
        printf("%d is greater than %d",n1,n2);
    else if(n1<n2)
        printf("%d is greater than %d",n2,n1);
    else
        printf("%d  ",n1);

}
