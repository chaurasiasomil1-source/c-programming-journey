# include <stdio.h>
# include <math.h>

int main()
{
    int number;
    int sum = 0;
    float average;

    for (int i =1; i <=5; i++)
    {
        printf("enter number %d:", i);
        scanf("%d",&number);
        sum += number;
    }
    printf("The sum of the numbers is: %d\n", sum);
    average = (float)sum / 5;
    printf("the average of the numbers is : %f\n", average);

    return 0;
}