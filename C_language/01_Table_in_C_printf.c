

/* How to print a Table using printf  */
 
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Enter the number= ");
    scanf("%d", &a);

    printf("%dX1=%d\n", a, a * 1);
    printf("%dX2=%d\n", a, a * 2);
    printf("%dX3=%d\n", a, a * 3);
    printf("%dX4=%d\n", a, a * 4);
    printf("%dX5=%d\n", a, a * 5);
    printf("%dX6=%d\n", a, a * 6);
    printf("%dX7=%d\n", a, a * 7);
    printf("%dX8=%d\n", a, a * 8);
    printf("%dX9=%d\n", a, a * 9);
    printf("%dX10=%d\n", a, a * 10);
    return 0;
}
