#include<stdio.h>
int main()
{
	int i,a[10],n,value;
	printf("enter size\n");
	scanf("%d",&n);
	printf("entr elemnts\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter value");
	scanf("%d",&value);
	for(i=0;i<n;i++){
		if(a[i]==value){
			printf("value found is %d",i);
			break;
		}
	}
	if(i==n){
		printf("element not found");
	}
	return 0;
}
