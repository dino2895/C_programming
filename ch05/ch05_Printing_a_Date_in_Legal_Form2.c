#include<stdio.h>
int main(){
	int h, m;
	scanf("%d",&m);
	h = m/60;
	if (h==24){
		printf("AM:");
		h = h-24;
	}
	else if (h<12){
		printf("AM:");
	}
	else if(h>11){
		printf("PM:");
		h = h-12;
	}
	//printf("%d",h);
	switch(h){
		case 0:
			printf("zero");
			break;
		case 1:
			printf("one");
			break;
		case 2:
			printf("two");
			break;
		case 3:
			printf("three");
			break;
		case 4:
			printf("four");
			break;
		case 5:
			printf("five");
			break;
		case 6:
			printf("six");
			break;
		case 7:
			printf("seven");
			break;
		case 8:
			printf("eight");
			break;
		case 9:
			printf("nine");
			break;
		case 10:
			printf("ten");
			break;
		case 11:
			printf("eleven");
			break;
		case 12:
			printf("twelve");
			break;
	}
	printf(":");
	m = m%60;
	printf("%d",m);
}
		