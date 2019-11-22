#include<stdio.h>
#include<math.h>
int main(void)
{
    int a,s,n,i,t,j;
    s=t=0;
    printf("enter a,n:");
    scanf("%d,%d",&a,&n);
    for(j=0;j<=n;j++)
    {for(i=0;i<=j;i++)
    {
        t=a*pow(10,i-1);
        s=s+t;
    }
    }
    printf("s=%d\n",s);
    return 0;
}