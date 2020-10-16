#include<stdio.h>
int main(){
	float i,j=0;
	for(;;){
		printf("Enter a number (enter 0 to end): ");
		scanf("%f",&i);
		if (i==0){ 
			printf("The largest number entered was %.2f",j);
			break;
		}
		else {
			if (i>j)
				j=i;
		}
		
	}
}