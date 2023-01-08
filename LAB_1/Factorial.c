#include <stdio.h>
#include<time.h>

void main(){
    double t_spent = 0.0;
    clock_t begin, end;
    begin = clock();
    int n, temp =1;
    printf("Enter Number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        temp = temp*i;
    }
    printf("Factorial of %d is %d",n, temp); 
    end = clock();
    t_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elsaped time is %f seconds", t_spent);
}