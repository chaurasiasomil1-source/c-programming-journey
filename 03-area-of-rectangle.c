# include <stdio.h>

int main()
{
    int  length, width, area;

    printf("enter length : ");
    scanf("%d",&length);

    printf("enter width : ");
    scanf("%d",&width),

    area = length * width;
    printf("area =%d\n",area);

    return 0;
}