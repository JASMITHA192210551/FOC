#include<stdio.h>
int main()
{
	int r,c,i,j,k,a[10][10],b[10][10],mul[10][10];
	printf("enter rows\n");
	scanf("%d",&r);
	printf("enter columns\n");
	scanf("%d",&c);
	printf("enter 1st element\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd element\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiply \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			mul[i][j]=0;
			for(k=0;k<c;k++){
				mul[i][j]+=a[i][k]*b[k][j];
			}
			
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
