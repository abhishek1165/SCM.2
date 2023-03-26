#include<stdio.h>
#include<math.h>
int main()
{
	int num,OrginalNum,remainder,n=0,result=0;
	printf("Enter a no.");
	scanf("%d",&num);
	OrginalNum=num;
	while(OrginalNum!=0)
	{
		OrginalNum/=10;
		n++;
	}
	OrginalNum=num;
	for(int i=0;i<n;i++)	{
		remainder=OrginalNum%10;
		result+=pow(remainder,n);
		OrginalNum/=10;
	}
	if (result=num)
	{
		printf("%d is a Armstrong no.\n",num);
}
	else 
{
	 printf("%d is not a Armstrong no.\n",num);
}
	return 0;
}
