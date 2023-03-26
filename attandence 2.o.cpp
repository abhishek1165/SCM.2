#include<stdio.h>
int main() {
	int a,b;
	printf("enter attend  class");
	scanf("%d",a);
	printf("enter your total classes ");
	scanf("%d",b);
	if (a/b)*100>75 {
		printf("low");
	}
	else {
		printf("high");
	}
	return 0;
}
