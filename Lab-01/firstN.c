#include <stdio.h>
#include<time.h>

void main(){
    double t_spent = 0.0;
    clock_t begin, end;
    begin = clock();
    printf("First 50 Natural no are: \n");
    for(int i=1; i<=50; i++){
    printf("%d ",i);
    } 
    end = clock();
    t_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("\nThe elsaped time is %f seconds", t_spent);
}
    