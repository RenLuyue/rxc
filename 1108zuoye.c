#include<stdio.h>
int main(void)
{
    int s;
    printf("enter s:");
    scanf("%d",&s);
    if (s>=90)
    {
    printf("A\n");
    }
    else if (90>s&&s>=80)
    {
    printf("B\n");
    }
    else if (80>s&&s>=70)
    {
    printf("C\n");
    }
    else if(70>s&&s>=60)
    printf("D\n");
    else
    printf("E\n");
    return 0;
}