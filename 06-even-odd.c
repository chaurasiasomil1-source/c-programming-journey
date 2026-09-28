# include <stdio.h>
 
int main()
{
    int number;
    printf("enter number : ");
    scanf("%d",&number);
    number % 2 == 0 ? printf("even") : printf("odd");

    return 0;
}