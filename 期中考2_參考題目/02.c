#include<stdio.h>
int main(){
	int arr[5][5];
	int r=0,c=0;
	for (int i=0;i<5;i++){
		printf("Enter row %d: ",i+1);
		for(int j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Row totals: ");
	for (int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			r+=arr[i][j];
		}
		printf("%d ",r);
		r = 0;
	}
	printf("\n");
	printf("Column totals: ");
	for (int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			c+=arr[j][i];
		}
		printf("%d ",c);
		c = 0;
	}
}