#include<stdio.h>
//P57
int main(){
	int d, a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, 
	first_sum, second_sum, total, check_digit;
	
	printf("Enter the first 11 digits of a UPC:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d,&a1,&a2,&a3,&a4,&a5,&b1,&b2,&b3,&b4,&b5);
	first_sum = d+a2+a4+b1+b3+b5;
	second_sum = a1+a3+a5+b2+b4;
	total = 3*first_sum + second_sum;
	//printf("total: %d\n",total);
	check_digit = 9 - ((total-1)%10);
	printf("Check digit:%d", check_digit);
}