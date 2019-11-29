#include<stdio.h>
int main(void)
{
    int i,m;
    int count=0;
    for(m=2;m<100;m++)
    {
    for(i=2;i<=m/2;i++)
    if(m%i==0)
    break;
    if(i>m/2)
    {
    count++;
    printf("%-5d",m);
    if(count%10==0)
    printf("\n");
    }
    }
    return 0;
}