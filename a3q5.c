//5. Write a program to check whether a given number is a three-digit number or not.
void main()
{
    int n;
    scanf("%d",&n);
    int cnt=0;
    while(n>0)
    {
        cnt++;
        n=n/10;
    }
    if(cnt==3)
        printf("the number is a 3 digit number");
    else
        printf("it is not a 3 digitt number");
}
