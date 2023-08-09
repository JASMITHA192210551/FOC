#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter input");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum+=i*i;
	}
	printf("%d",sum);
	return 0;
}
