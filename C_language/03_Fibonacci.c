#include <stdio.h>
int fib_iter(int n)
{
    int b = 1, c = 1;
    for (int i = 0; i < n - 1; i++)
    { 
        c = b + c;
        b = c - b;
    }
    return b;
}
int fib_recur(int n)
{
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fib_recur(n - 1) + fib_recur(n - 2);
    }
}
int main()
{
    int a;
    printf("Enter the index to print fibonacci number ");
    scanf("%d", &a);
    printf("The value of Fibonacci number at %d position by iterative be : %d\n", a, fib_iter(a));
    printf("The value of Fibonacci number at %d position by recursive be : %d\n", a, fib_recur(a));
    return 0;
}
