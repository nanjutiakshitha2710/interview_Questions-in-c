#include <stdio.h>
void main()
{
    int big;
    int small;
    int goal;
    printf("enter the number of big bricks\n");
    scanf("%d",&big);
    printf("enter the number of small bricks\n");
    scanf("%d",&small);
    printf("enter the goal\n");
    scanf("%d",&goal);
    int required=goal/5;
    if(required<=big)
    {
        int rem=goal-(required*5);
        if(rem<=small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    else
    {
        int rem1=goal-(big*5);
        if(rem1<=small)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
    }
    }