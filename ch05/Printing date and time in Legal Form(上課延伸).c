#include<stdio.h>

int main(){
	
	int mon=0,date=0,year=0,hr=0,min=0,sec=0;
	
	scanf("%d/%d/%d",&mon,&date,&year);
	scanf("%2d:%2d:%2d",&hr,&min,&sec);
	
	if(hr>12){
		hr-=12;
		printf("PM %.2d:%.2d:%.2d, ",hr,min,sec);
	}
	else if(hr>0&&hr<12){
		hr=hr;
		printf("AM %.2d:%.2d:%.2d, ",hr,min,sec);
	}
	else if(hr==12)printf("PM %.2d:%.2d:%.2d, ",hr,min,sec);
	else if(hr==0)printf("AM %.2d:%.2d:%.2d, ",hr+12,min,sec);
	
	switch(date){
		case 1: case 21: case 31:
			printf("%dst day of ",date);break;
		case 2: case 22:
			printf("%dnd day of ",date);break;
		case 3: case 23:
			printf("%drd day of ",date);break;
		default:
			printf("%dth day of ",date);break;
	}
	
	switch (mon) {
		case 1: 
			printf("January");
            break;
		case 2: 
			printf("February");
            break; 
		case 3: 
			printf("March");
			break; 
		case 4: 
			printf("April");
			break; 
		case 5: 
			printf("May");
            break; 
		case 6: 
			printf("June");
            break; 
		case 7: 
			printf("July");
            break; 
		case 8: 
			printf("August");
            break; 
		case 9: 
			printf("September");
            break; 
		case 10: 
			printf("October");
            break; 
		case 11: 
			printf("November");
            break; 
		case 12: 
			printf("December");
            break;
	}
	printf(", %d.",year+2000);
	
	
}