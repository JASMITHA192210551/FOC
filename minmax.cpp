#include<stdio.h>
int main()
{
	int max,min,i,n,a[12];

	printf("enter elements\n");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	max=min=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
		else
		if(a[i]<min)
		min=a[i];
	}
	printf("max is %d\n",max);
	printf("min is %d\n",min);
}
