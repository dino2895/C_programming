#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	switch(a){
		case 100:
			printf("Excellent");
			break;
		case 90:
			printf("Great");
			break;
		case 80:
			printf("Good");
			break;
		case 70:
			printf("Average");
			break;
		case 60:
			printf("Poor");
			break;
		case 50:
			printf("Failing");
			break;
	}
}