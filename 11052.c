#include<stdio.h>
int main(void)
{
    int k,t,c1,c2,c;
    printf("enter k,t:");
    scanf("%d,%d",&k,&t);
    if (k<=3)
    {
    c1=10;
    }
    else if (10>=k>3)
    {
        c1=2*(k-3)+10;
    }
    else if (k>10)
    {
        c1=24+3*(k-10);
    }
    if(t<5)
        {
        c2=0;
        }
    if(t>=5)
    {
    c2=t/5*2;
    }
    c=c1+c2;
    printf("c=%d\n",c);
    return 0;
}