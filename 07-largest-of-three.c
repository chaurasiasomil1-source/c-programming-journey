#include <stdio.h>

int main()
{
    int A, B, C;
    printf("enter A : ");
    scanf("%d", &A);

    printf("enter B : ");
    scanf("%d", &B);

    printf("enter C : ");
    scanf("%d", &C);

    if (A > B && A > C)
    {
        printf("%d", A);
    }
    else if (B > C && B > A)
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }

    return 0;
}