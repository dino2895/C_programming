#include<stdio.h>
int main(){
	int m ,d ,y;
	printf("Enter date (mm/dd/yy): ");
	scanf("%d /%d /%d", &m,&d,&y);
	switch (d) {
		case 1: case 11: case 21: case 31:
			printf("Dated this %dst",d); break;
		case 2: case 12: case 22:
			printf("Dated this %dnd",d); break;
		case 3: case 13: case 23:
			printf("Dated this %drd",d); break;
		default: printf("Dated this %dth",d); break;
	}
	printf(" day of ");
	
	switch (m) {
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
	printf(", 20%.2d.", y);
}