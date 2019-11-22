#include<stdio.h>
int main(void)
{
    int i,j,n;
    double s,item;
    s=0;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    item=1;
    for(j=1;j<=i;j++)
    {
        item=item*j;
        s=s+item;
    }
    }
    printf("1!+2!+...+n!=%e\n",s);
    return 0;
}