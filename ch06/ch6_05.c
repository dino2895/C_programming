#include<stdio.h>
int main(){
	int i, n, odd;
	printf("\nThis program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	i = 1;
	odd = 3;
	
	for (int square = 1 ;i<=n;odd +=2){
		printf("%10d%10d\n",i, square);
		++i;
		square += odd;
	}
}