#include<stdio.h>

void main(){
    FILE *fp;
    int a[100], i=0;
    fp = fopen("./Question.txt", "r");

    while (fscanf(fp, "%d", &a[i])!=EOF)
    {
        printf("%d ", a[i]);
        i++;
    }
    fclose(fp);
    
}