#include<stdio.h>
int main()
{
	int i,j,r,c,a[10][10],b[10][10];
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
	printf("%d",a[i][j]);
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("transpose of matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",b[i][j]);
		}
	}
	printf("\n");
return 0;
}
