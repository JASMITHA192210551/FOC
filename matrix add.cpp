#include<stdio.h>
int main()
{
	int i,j,r,c,a[10][10],b[10][10],sum[i][j];
	printf("enter r\n");
	scanf("%d",&r);
	printf("enter col\n");
	scanf("%d",&c);
	printf("enter 1st mtarix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enteer 2nd matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("sum of matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
	sum[i][j]=a[i][j]+b[i][j];
	printf("%d",sum[i][j]);
    }
printf("\n");
}
return 0;
}
