#include<stdio.h>
#include<time.h>

void main(){
    double t_spent = 0.0;
    clock_t begin, end;
    begin = clock();
    int num,sum=0;
    printf("Please Enter any number:");
    scanf("%d", &num);

    while(num>0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    printf("\nSum of digit of this no is = %d",sum);
    end = clock();
    t_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elsaped time is %f seconds", t_spent);    
}