#include<stdio.h>

int main(void)
{
    float x,cost;
    printf("enter x:");
    scanf("%f",&x);
    if(x>50)
    {
    cost=50*0.35+(x-50)*0.58;
    }
    else
    {
    cost=0.53*x;
    }
    printf("cost=%.1f\n",cost);
    return 0;
}