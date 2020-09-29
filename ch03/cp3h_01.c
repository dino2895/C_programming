#include<stdio.h>
int main(){
	int item ,y ,m ,d;
	float price;
	scanf("%d %f %d/%d/%d",&item, &price ,&d ,&m ,&y);
	printf("Item  \t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%.2f\t\t%02d/%02d/%d",item , price ,d , m, y);
}