#include<stdio.h>
//P57
//0 1  3  8  0  0  1  5  1  7  3
//d a1 a2 a3 a4 a5 b1 b2 b3 b4 b5 
int main(){
	int d, a1, a2, a3, a4, a5, b1, b2, b3, b4, b5, 
	first_sum, second_sum, third_sum, total, check_digit;
	
	scanf("%1d", &d);
	scanf("%1d%1d%1d%1d%1d", &a1,&a2,&a3,&a4,&a5);
	scanf("%1d%1d%1d%1d%1d", &b1,&b2,&b3,&b4,&b5);
	first_sum = d+a3+b1+b4;
	second_sum = a1+a4+b2+b5;
	third_sum = a2+a5+b3;
	total = 3*first_sum + second_sum + third_sum;
	//printf("total: %d\n",total);
	check_digit = 9 - ((total-1)%10);
	printf("%d", check_digit);
}