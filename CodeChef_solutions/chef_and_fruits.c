#include<stdio.h>
#include<conio.h>
void main()
{
    int t,i,apples,oranges,coins;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&apples,&oranges,&coins);
        if(apples<oranges)
        {
            while(coins!=0&&oranges>=apples)
            {
            apples=apples+1;
            coins--;
            }
            printf("%d\n",oranges-apples);
        }
        if(apples>oranges)
        {
            while(coins!=0&&apples>=oranges)
            {
            oranges=oranges+1;
            coins--;
            }
            printf("%d\n",apples-oranges);
        }
        if(apples==oranges)
            printf("0\n");
    }
    return 0;
}
