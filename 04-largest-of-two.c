#include <stdio.h>

int main()
{
    int a, b;

    printf("enter a : ");
    scanf("%d",&a);

    printf("enter b : ");
    scanf("%d",&b);

    a > b ? printf("a is larger than b\n"): printf("b is larger than a\n");

    return 0;
}