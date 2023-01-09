#include <stdio.h>
#include <time.h>

int addNum(int n)
{
    if (n != 0)
    {
        return (n + addNum(n - 1));
    }
    else
    {
        return n;
    }
}
int main()
{
    int n;
    printf("Enter positive number: ");
    scanf("%d", &n);
    printf("\nSum of 1 to %d is %d", n, addNum(n));
    return 0;
}
