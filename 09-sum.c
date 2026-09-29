# include <stdio.h>

int main ()
{
    int number ;
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        printf("enter number : ");
        scanf("%d",&number);
        sum += number;
    }
    printf("sum = %d\n", sum);

    return 0;
}