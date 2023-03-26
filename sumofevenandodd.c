/*
wap to ask to enter n number and then enter number and 
find the sum of odd number and sum of even number*/
#include <stdio.h>
int main()
{
   int num,n,evensum=0,oddsum=0;
   printf("number of you want to input:-");
   scanf("%d",&num);
   for (int i=1;i<=num;i++){
      printf("enter  number:-");
      scanf("%d",&n);
      if(n%2==0){
         evensum+=n;
      }
      else{
         oddsum+=n;
      }
      printf("sum of even numbers is %d\n",evensum);
      printf("sum of odd numbers is %d",oddsum);
      
   }
    return 0;
}
