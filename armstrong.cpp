#include<stdio.h>

int main()
{
	int i,n,m,rev=0,sum=0;
	printf("enter input\n");
	scanf("%d",&n);
	n=m;
	while(n!=0)
	{
		rev=rev*10+n%10;
		n=n/10;
	}
   if(m==sum)
   	printf("asn");
	else
	printf("nasn");
}
