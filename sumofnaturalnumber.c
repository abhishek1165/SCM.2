#include<stdio.h>
int main()
{
    int num ,sum=0;
    printf(" enter the number for sum ");
    scanf("%d", &num);
    for(int i=1; i<=num; i++){
        sum+=i;
    }
printf("sum of %d natural number %d",num, sum);
    
}