//10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.
#include<stdio.h>
void main()
{
    int cp,sp,profit;
    scanf("%d %d",&cp,&sp);
    profit=sp-cp;
    if(profit>=0)
    {
        int pp=(profit*100)/cp;
        printf("profit percentage is %d \%",pp);
    }
    else
    {
        profit=profit-2*profit;
        int lp=(profit*100)/cp;
        printf("Loss percentage is %d \%",lp);

    }
}
