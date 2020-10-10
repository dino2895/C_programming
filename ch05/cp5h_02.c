#include<stdio.h>
int main(){
	int a ,b;
	printf("Enter a 24-hour time: ");
	scanf("%d:%2d", &a,&b);
	if ((a==0 && b<=59)||(a<24 && b<60)||(a==24&&b==0)){
		if(a==0){
			a = a+12;
			printf("Equivalent 12-hour time: %d:%02d AM",a,b);
		}
		else if(a<=12){
			printf("Equivalent 12-hour time: %d:%02d PM",a,b);
		}
		else if(a>12){
			a = a-12;
			printf("Equivalent 12-hour time: %d:%02d PM",a,b);
		}
		else if(a<13&&b<60)
			printf("Equivalent 12-hour time: %d:%02d AM",a,b);
		else if(a==24){
			a = a-24;
			printf("Equivalent 12-hour time: %d:%02d AM",a,b);
		}
	}
	else
		printf("Not the correct time format");
}