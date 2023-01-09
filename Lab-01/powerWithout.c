#include <stdio.h>
#include<time.h>

void main(){
    double t_spent = 0.0;
    clock_t begin, end;
    begin = clock();
    int p,b, temp=1;
    printf("Enter Base :");
    scanf("%d",&b);
    printf("Enter Power :");
    scanf("%d",&p);

    for(int i=1; i<=p; i++){
        temp = temp*b;
    }
    printf("Your Answer is %d",temp);
    end = clock();
    t_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elsaped time is %f seconds", t_spent);
}
    