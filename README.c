#include<stdio.h>

int main(void)
{
    int e,b,c,d;
    float s,a;
    printf("Enter s:\n");
    scanf("%d,%d,%d,%d",&e,&b,&c,&d);
    s=e+b+c+d;
    a=(s/4.0*10)/10.0;
    printf("s=%f,a=%.1f\n",s,a);
}
