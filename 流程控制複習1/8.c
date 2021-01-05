#include<stdio.h>
int main(){
	float a=0,b=0;
	scanf("%f",&a);
	scanf("%f",&b);
	if(b>a){
		float x = 0;
		x = (b-a)*100/a;
		printf("profit %.2f%%",x);
	}
	else{
		float x = 0;
		x = -(b-a)*100/a;
		printf("loss %.2f%%",x);
	}
}