# include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("enter five numbes: " );
    scanf("%d %d %d %d %d ", &a , &b , &c , &d , &e );
    a % 2 ==0 ? printf("%d is even\n", a) : printf("%d is odd \n", a);
    b % 2 ==0 ? printf("%d is even\n", b) : printf("%d is odd \n", b);
    c % 2 ==0 ? printf("%d is even\n", c) : printf("%d is odd \n", c);
    d % 2 ==0 ? printf("%d is even\n", d) : printf("%d is odd \n", d);
    e % 2 ==0 ? printf("%d is even\n", e) : printf("%d is odd \n", e);
    return 0;
}