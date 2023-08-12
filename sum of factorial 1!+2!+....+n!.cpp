#include<stdio.h>
int main()
{
	int i,n,fact=1,sum=0;
	printf("enter input\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fact=fact*i;
		printf("fact of %d is %d\n",i,fact);
		sum=sum+fact;
	}
	printf("sum of factorial is %d",sum);
	return 0;
}
