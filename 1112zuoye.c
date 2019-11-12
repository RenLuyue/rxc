#include<stdio.h>
int main(void)
{
    int a,n;
    float p;
    for(a=1;a<=5;a++)
    {
    printf("[1]apples,[2]pears,[3]oranges,[4]grapes,[0]Exit\n");
    printf("enter n:");
    scanf("%d",&n);
    switch(n)
    {
    case 0:printf("thanks\n");
        break;
    case 1:printf("p=3.00\n");
        break;
    case 2:printf("p=2.50\n");
        break;
    case 3:printf("p=4.10\n");
        break;
    case 4:printf("p=10.20\n");
        break;
    default:printf("p=0.00\n");
        break;
    printf("p=%0.1f\n",p);
    }
    }
    return 0;
}