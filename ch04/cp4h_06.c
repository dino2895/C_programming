#include<stdio.h>
//P57
int main(){
	int a1, a2, a3, a4, a5 ,a6 ,a7 ,a8 ,a9 ,a10 ,a11 ,a12,
	first_sum, second_sum, total, check_digit;
	
	printf("Enter the first 12 digits of an EAN:");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12);
	first_sum = a2+a4+a6+a8+a10+a12;
	//printf("sum1:%d\n",first_sum);
	second_sum = a1+a3+a5+a7+a9+a11;
	//printf("sum2:%d\n",second_sum);
	total = 3*first_sum + second_sum;
	//printf("total: %d\n",total);
	check_digit = 9 - ((total-1)%10);
	printf("Check digit:%d", check_digit);
}