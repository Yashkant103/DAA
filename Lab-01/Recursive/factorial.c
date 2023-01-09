#include<stdio.h>
#include<time.h>

int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return (n * factorial(n-1));  
}
void main(){
    double t_spent = 0.0;
    clock_t begin, end;
    begin = clock();
    int number;  
    int fact;  
    printf("Enter a number: ");  
    scanf("%d", &number);   
    
    fact = factorial(number);  
    printf("Factorial of %d is %d\n", number, fact);  
    end = clock();
    t_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elsaped time is %f seconds", t_spent);

}    
  