#include<stdio.h>
int main(){
	int a[6][6];
	for (int i=0;i<6;i++){
		for (int j=0;j<6;j++){
			if (i==j)
				a[i][j]=9;
			else
				a[i][j]=1;
		}
	}
	for (int i=0;i<6;i++){
		for (int j=0;j<6;j++){
			printf("%d",a[i][j]);
			if (j<5)
				printf(" ");
		}
		if (i<5)
			printf("\n");
	}
}