#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter input");
	scanf("%d",&n);
	for(i=2;i<=n;i=i+10)
	{
	 sum=sum+i;
	}
	printf("%d",sum);
}
