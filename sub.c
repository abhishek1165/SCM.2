#include <stdio.h>
int main() 
{    

    int number1, number2, sub;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    
    sub = number1 - number2;      
    
    printf(" sub value is = %d",  sub);
    return 0;
}
