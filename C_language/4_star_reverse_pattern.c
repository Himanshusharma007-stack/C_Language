#include <stdio.h>
int main()
{
    int a; 
    printf("Enter the rows you want to print ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}