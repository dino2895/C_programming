#include<stdio.h>
int main(){
	float a,b;
	printf("Enter amount of taxable income: ");
	scanf("%f",&a);
	if (a<=750.0f){
		b = a*0.01;
		printf("Tax due is: $%f",b);
	}
	else if((a>750.0f)&&(a<2251.0f)){
		b = (a-750)*0.02+7.5f;
		printf("Tax due is: $%.2f",b);
	}
	else if((a>2250.0f)&&(a<3751.0f)){
		b = (a-2250)*0.03+37.5f;
		printf("Tax due is: $%.2f",b);
	}
	else if((a>3750.0f)&&(a<5251.0f)){
		b = (a-3750)*0.04+82.5f;
		printf("Tax due is: $%.2f",b);
	}
	else if((a>5250.0f)&&(a<7001.0f)){
		b = (a-5250)*0.05+142.5f;
		printf("Tax due is: $%.2f",b);
	}
	else if(a>7000.0f){
		b = (a-7000)*0.06+230.0f;
		printf("Tax due is: $%.2f",b);
	}
}