#include<stdio.h>
int main(){
	int a;
	printf("Enter a numerical grade: ");
	scanf("%d",&a);
	switch (a){
		case 90 ... 100:
			printf("Letter grade: A");
			break;
		case 80 ... 89:
			printf("Letter grade: B");
			break;
		case 70 ... 79:
			printf("Letter grade: C");
			break;
		case 60 ... 69:
			printf("Letter grade: D");
			break;
		case 0 ... 59:
			printf("Letter grade: F");
			break;
	}
}