#include <stdio.h>
//Star Pattern
void star(int n)
{
    for (int i = 0; i <= n-1; i++)
    { 
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void rev_star(int n)
{
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= n-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int a,b;
    printf("Press 1 for star pattern and 2 for Reverse star pattern \n");
    scanf("%d",&b);
    if (b==1)
    {
        printf("Enter the number you want to print pattern ");
        scanf("%d", &a);
        star(a);
    }
    else
    {
        printf("Enter the number you want to print pattern ");
        scanf("%d", &a);
        rev_star(a);
    }
    
    
    return 0;
}