#include<stdio.h>
int main(){
	int input;
	printf("Enter wind speed (knots): ");
	scanf("%d",&input);
	if (input<1)
		printf("Wind force at %d knots is Calm", input);
	else if ((1<=input)&&(input<=63)){
		switch (input) {
			case 1 ... 3: 
				printf("Wind force at %d knots is Light air", input);
				break;
			case 4 ... 27: 
				printf("Wind force at %d knots is Breeze", input);
				break; 
			case 28 ... 47: 
				printf("Wind force at %d knots is Gale", input);
				break; 
			case 48 ... 63: 
				printf("Wind force at %d knots is Storm", input);
				break; 
		}
	}
	else if (input>63){
		printf("Wind force at %d knots is Hurricane", input);
	}
}