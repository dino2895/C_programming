#include<stdio.h>
#include<ctype.h>
int main(){
	char p;
	int h,m;
	printf("Enter a 12-hour time (hours:minutes AM/PM): ");
	scanf("%d:%d %c",&h,&m,&p);
	
	if(h==12)
		h = 0;
	
	switch(p = toupper(p)){
		case 'P':
			h+=12;
			break;
		case 'A':
			break;
	}
	printf("Equivalent 24-hour time: %.2d:%.2d",h,m);
}