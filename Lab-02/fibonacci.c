//1.Generate Fibonacci series upto n terms using itrative method.

#include<stdio.h>
#include<time.h>

void main(){
    double t_spent = 0.0;
    clock_t begin, end;
    begin = clock();
    int a=0, b=1, sum, n;
    printf("Enter the no till you want Fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci Series :: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a);
        sum = a + b;
        a = b;
        b = sum;
    }
    end = clock();
    t_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elsaped time is %f seconds", t_spent);    
}