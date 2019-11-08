#include<stdio.h>
int main(void)
{
    float k,c1,c;
    int t;
    printf("enter k,t:");
    scanf("%f,%d",&k,&t);
    if (k<=3)
    {
    c1=10;
    }
    else if (13>=k>3)
    {
        c1=2*(k-3)+10;
    }
    else if (k>13)
    {
        c1=30+3*(k-13);
    }
    c=c1+t/5*2;
    printf("c=%.0f\n",c);
    return 0;
}