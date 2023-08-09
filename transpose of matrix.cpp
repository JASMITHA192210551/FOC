#include<stdio.h>
int main()
{
	int r,c,i,j,k,a[10][10],b[10][10],mul[10][10];
	printf("enter rows\n");
	scanf("%d",&r);
	printf("enter columns\n");
	scanf("%d",&c);
	printf("enter element\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("%d",a[i][j]);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		b[i][j]=a[j][i];
		}
	}
	printf("transpose matrix is %d\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
